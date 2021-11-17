const stack = [1, 2, 3];

// push_back
stack.push(4);
console.log(stack);

// pop_back
const last = stack.pop();
console.log(last, stack);

// back
const last2 = stack[stack.length - 1];
console.log(last2, stack);

// size
const size = stack.length;
console.log(size);