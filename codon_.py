import _base
import codon


@codon.jit
def run_example():
    output_buf = []
    for one_number in range(100):
        output_buf.append(one_number * one_number)
    return output_buf


if __name__ == "__main__":
    _base.run_timeit()
