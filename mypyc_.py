import _base


def run_example():
    output_buf = []
    for one_number in _base.INPUT_VALUES:
        output_buf.append(one_number * one_number)
    return output_buf


if __name__ == "__main__":
    _base.run_timeit()
