import _base
import taichi as ti

ti.init()


INPUT_VALUES = ti.field(dtype=int, shape=100)
OUTPUT_VALUES = ti.field(dtype=int, shape=100)


for one_item in range(100):
    INPUT_VALUES[one_item] = one_item


@ti.kernel
def run_example():
    for index in INPUT_VALUES:
        OUTPUT_VALUES[index] = INPUT_VALUES[index] * INPUT_VALUES[index]


if __name__ == "__main__":
    _base.run_timeit()
