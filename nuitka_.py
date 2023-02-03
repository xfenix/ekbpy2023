import _base


def run_example():
    """
    Basically, copy of raw module. But before:

    ```
    pip install nuitka
    python -m nuitka _base.py --module
    ```
    """
    _base.run_heavy_task(_base.INPUT_VALUES)


if __name__ == "__main__":
    _base.run_timeit()
