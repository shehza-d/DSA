// https://leetcode.com/problems/cache-with-time-limit/

undone;
// class TimeLimitedCache {
//   constructor() {}

//   set(key, value, duration) {}

//   get(key) {}

//   count() {}
// }

// const obj = new TimeLimitedCache();
// obj.set(1, 42, 1000); // false
// obj.get(1); // 42
// obj.count(); // 1

/**
 * Your TimeLimitedCache object will be instantiated and called as such:
 * var obj = new TimeLimitedCache()
 * obj.set(1, 42, 1000); // false
 * obj.get(1) // 42
 * obj.count() // 1
 */

interface TTLValue {
  value: number;
  timer: ReturnType<typeof setTimeout>;
}

class TimeLimitedCache {
  cache = new Map<number, TTLValue>();

  set(key: number, value: number, duration: number): boolean {
    const exists = this.cache.has(key);
    if (exists) clearTimeout(this.cache.get(key).timer);
    this.cache.set(key, {
      value,
      timer: setTimeout(() => this.cache.delete(key), duration),
    });
    return exists;
  }

  get(key: number): number {
    return this.cache.has(key) ? this.cache.get(key).value : -1;
  }

  count(): number {
    return this.cache.size;
  }
}
