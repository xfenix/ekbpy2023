import _base
import _pycom


def run_example():
    _pycom.run_heavy_task(_pycom.INPUT_VALUES)


if __name__ == "__main__":
    _base.run_timeit()
