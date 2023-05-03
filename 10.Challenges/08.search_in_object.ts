const searchFun = (searchQuery: string) => {
  return data.filter(
    (item) =>
      item.name.toLowerCase().includes(searchQuery) ||
      item.company.toLowerCase().includes(searchQuery) ||
      item.email.toLowerCase().includes(searchQuery) ||
      item.rank.toLowerCase().includes(searchQuery)
  );
};

// data=>array of objects obj[]
// search fun for front end
