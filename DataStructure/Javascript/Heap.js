class Heap {
	constructor(size) {
		if (size && inNaN(size)) throw Error(`Invalidparam`);

		this.idx = 0;
		this.arr = new Array(size ? size : 11).fill(null);
	}

	add(n) {
		if (this.idx + 1 === this.arr.length) throw Error(`Stack overflow`);

		let idx = ++this.idx;
		this.arr[idx] = n;

		while (idx > 1) {
			const nextIdx = idx >> 1;
			const parent = this.arr[nextIdx];
			const cur = this.arr[idx];

			if (parent <= cur) break;

			this.arr[nextIdx] = cur;
			this.arr[idx] = parent;

			idx >>= 1;
		}

		return true;
	}

	print() {
		console.log(this.arr);
	}
	
	pop() {
		if (this.idx === 0 ) throw Error(`Empty stack`);

		const ret = this.arr[1];
		let idx = 1;

		this.arr[1] = this.arr[this.idx];
		this.arr[this.idx--] = null;

		while (idx < this.idx) {
			if (idx & 2 > this.idx || idx * 2 + 1 > this.idx) break;

			let nextIdx = idx * 2;
			if (this.arr[idx] <= this.arr[nextIdx]) nextIdx = idx;
			if (this.arr[nextIdx] > this. arr[idx * 2 + 1]) nextIdx = idx * 2 + 1;
			if (nextIdx === idx) break;

			const tmp = this.arr[idx];
			this.arr[idx] = this.arr[nextIdx];
			this.arr[nextIdx] = tmp;
			idx = nextIdx;
		}

		return ret;
	}

	peek() {
		return this.arr[this.idx];
	}
}

function main() {
	const heap = new Heap();

	for (let i = 10; i > 0; i--) {
		heap.add(i);
	}

	heap.print();
	while (heap.peek()) {
		console.log(heap.pop(), heap.idx);
		heap.print();
	}
}

main();
