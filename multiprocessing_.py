from multiprocessing import Pool

from _base import INPUT_VALUES, run_heavy_task

PROC_COUNT = 3
CHUNK_PARTS = len(INPUT_VALUES) // PROC_COUNT


def _chunks(l, n):
    for i in range(0, n):
        yield l[i::n]


def run_example():
    answers = []
    ready_chunks = _chunks(INPUT_VALUES, CHUNK_PARTS)
    with Pool(PROC_COUNT) as pool:
        answers.extend(pool.map(run_heavy_task, ready_chunks))
    print(answers)


if __name__ == "__main__":
    run_example()
