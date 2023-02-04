import _base
import _cython


def run_example():
    """Run:
    cythonize -i cython_.py
    """
    _cython.run_heavy_task(_cython.INPUT_VALUES)


if __name__ == "__main__":
    _base.run_timeit()
