

/*
 * Determine the original side lengths and return an array:
 * - The first element is the length of the shorter side
 * - The second element is the length of the longer side
 * 
 * Parameter(s):
 * literals: The tagged template literal's array of strings.
 * expressions: The tagged template literal's array of expression values (i.e., [area, perimeter]).
 */
function sides(literals, ...expressions) {
  const [area, perimeter] = expressions; // ES6 destructuring
  const s1 = (perimeter + Math.sqrt(Math.pow(perimeter, 2) - 16 * area)) / 4;
  const s2 = (perimeter - Math.sqrt(Math.pow(perimeter, 2) - 16 * area)) / 4;
  return [s1, s2].sort();
}


