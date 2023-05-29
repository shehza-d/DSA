const jsonStringify = (value: any): string => {
  if (typeof value === "string") return `"${value}"`;
  if (typeof value === "number" || typeof value === "boolean" || value === null)
    return String(value);

  if (Array.isArray(value)) {
    if (!value.length) return "[]";
    const items = value.map((item) => jsonStringify(item)).join(",");
    return `[${items}]`;
  }

  if (typeof value === "object") {
    const keys = Object.keys(value);
    if (!keys.length) return "{}";
    const items = keys.map((key) => `"${key}":${jsonStringify(value[key])}`);
    return `{${items.join(",")}}`;
  }
};

const object = { y: 1, x: 2 };
const object = { a: "str", b: -12, c: true, d: null };
const object = { key: { a: 1, b: [{}, null, "Hello", []] } };
const object = () => {};
const object = null;
const object = [1, 2, "shehzad"];

console.log(jsonStringify(object));
