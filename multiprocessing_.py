from multiprocessing import Pool

import _base

PROC_COUNT = 3
CHUNK_PARTS = len(_base.INPUT_VALUES) // PROC_COUNT


def _chunks(l, n):
    for i in range(0, n):
        yield l[i::n]


def run_example():
    answers = []
    ready_chunks = _chunks(_base.INPUT_VALUES, CHUNK_PARTS)
    with Pool(PROC_COUNT) as pool:
        answers.extend(pool.map(_base.run_heavy_task, ready_chunks))


if __name__ == "__main__":
    _base.run_timeit()
