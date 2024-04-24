// https://leetcode.com/problems/design-a-food-rating-system
// Undone

interface Food {
  [key: string]: number;
}

interface Cuisine {
  [key: string]: Food;
}

interface Foods {
  korean: Cuisine;
  japanese: Cuisine;
  greek: Cuisine;
}


// TODO: use Object.groupBy()

class FoodRatings {
  foodsRecord: Partial<Foods> = {};

  constructor(foods: string[], cuisines: string[], ratings: number[]) {
    for (let i = 0; i < foods.length; i++) {
      const cuisine = this.foodsRecord[cuisines[i]];
      if (!cuisine) this.foodsRecord[cuisines[i]] = { [foods[i]]: ratings[i] };
      else cuisine[foods[i]] = ratings[i];
    }
  }

  changeRating(food: string, newRating: number): void {
    const cuisines = Object.keys(this.foodsRecord);

    for (let i = 0; i < cuisines.length; i++) {
      const foods = Object.keys(this.foodsRecord[cuisines[i]]);

      for (let j = 0; j < foods.length; j++) {
        if (foods[j] === food) this.foodsRecord[cuisines[i]][food] = newRating;
      }
    }

    // console.log("🚀 ~ FoodRatings ~ foods:", this.foodsRecord.japanese);
  }

  highestRated(cuisine: string): string {
    let highestRating = 0;
    let highestRatedFood = "";

    for (const key in this.foodsRecord[cuisine]) {
      const rating = this.foodsRecord[cuisine][key];
      //   console.log(`${rating} > ${highestRating}`);
      if (rating === highestRating) {
        // console.log("🚀 ~ FoodRatings ~ highestRated ~ key:", key);
        // console.log(
        //   "🚀 ~ FoodRatings ~ highestRated ~ highestRatedFood:",
        //   highestRatedFood
        // );

        highestRatedFood = highestRatedFood < key ? highestRatedFood : key;
      } else if (rating > highestRating) {
        highestRating = rating;
        highestRatedFood = key;
      }
      // if (this.foodsRecord[cuisine].hasOwnProperty(key)) {
      console.log(`${key}: ${rating}`);
      // }
    }

    return highestRatedFood;
  }
}

const foodRatings = new FoodRatings(
  ["kimchi", "miso", "sushi", "moussaka", "ramen", "bulgogi"],
  ["korean", "japanese", "japanese", "greek", "japanese", "korean"],
  [9, 12, 8, 15, 14, 7]
);

// foodRatings.highestRated("korean"); // return "kimchi" // "kimchi" is the highest rated korean food with a rating of 9.

// foodRatings.highestRated("japanese"); // return "ramen"// "ramen" is the highest rated japanese food with a rating of 14.

foodRatings.changeRating("sushi", 16); // "sushi" now has a rating of 16.

// foodRatings.highestRated("japanese"); // return "sushi" // "sushi" is the highest rated japanese food with a rating of 16.

foodRatings.changeRating("ramen", 16); // "ramen" now has a rating of 16.
let a = foodRatings.highestRated("japanese"); // return "ramen" // Both "sushi" and "ramen" have a rating of 16.
console.log("🚀 ~ a:", a);

// However, "ramen" is lexicographically smaller than "sushi".

/**
 * Your FoodRatings object will be instantiated and called as such:
 * var obj = new FoodRatings(foods, cuisines, ratings)
 * obj.changeRating(food,newRating)
 * var param_2 = obj.highestRated(cuisine)
 */
