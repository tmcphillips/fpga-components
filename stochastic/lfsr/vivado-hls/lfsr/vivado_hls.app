<project xmlns="com.autoesl.autopilot.project" name="lfsr" top="simple_lfsr_next_random_bits">
    <files>
        <file name="../../../src/cpp/simple_lfsr_tb.cpp" sc="0" tb="1" cflags=" -fpermissive"/>
        <file name="../src/cpp/simple_lfsr_tb.cpp" sc="0" tb="false" cflags=""/>
        <file name="../src/cpp/simple_lfsr.h" sc="0" tb="false" cflags=""/>
    </files>
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" clean="true" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <solutions xmlns="">
        <solution name="ultrazed" status="active"/>
        <solution name="ultrazed-unrolled-loop" status="inactive"/>
    </solutions>
</project>

