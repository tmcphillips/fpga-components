<project xmlns="com.autoesl.autopilot.project" name="lfsr" top="simple_lfsr_next_random_bits">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" clean="true" csimMode="0" lastCsimMode="0"/>
    </Simulation>
    <files xmlns="">
        <file name="../../../src/cpp/simple_lfsr_tb.cpp" sc="0" tb="1" cflags=" -fpermissive"/>
        <file name="../src/cpp/simple_lfsr_tb.cpp" sc="0" tb="false" cflags=""/>
        <file name="../src/cpp/simple_lfsr.h" sc="0" tb="false" cflags=""/>
    </files>
    <solutions xmlns="">
        <solution name="ultrazed" status="inactive"/>
        <solution name="ultrazed-unrolled-loop" status="active"/>
    </solutions>
</project>

