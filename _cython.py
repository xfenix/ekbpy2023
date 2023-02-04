import cython

INPUT_VALUES: cython.int[100] = range(100)


def run_heavy_task(parts):
    output_buf = []
    for one_number in parts:
        output_buf.append(one_number * one_number)
    return output_buf


def run_timeit():
    import timeit

    print(timeit.timeit("run_example()", setup="from __main__ import run_example"))
