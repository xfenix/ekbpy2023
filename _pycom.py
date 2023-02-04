INPUT_VALUES = range(100)


def run_heavy_task(parts):
    output_buf = []
    for one_number in parts:
        output_buf.append(one_number * one_number)
    return output_buf
