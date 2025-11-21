#!/bin/bash
./compiler examples/chip_code_sample.mdsc -o out.isa
./interpreter out.isa > output.txt
diff output.txt tests/test_expected_output1.txt
