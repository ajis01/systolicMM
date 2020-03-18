circuit cc_banks_0_ext :
  module data_arrays_0_ext :
    input RW0_addr : UInt<8>
    input RW0_clk : Clock
    input RW0_wdata : UInt<256>
    output RW0_rdata : UInt<256>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<32>
  
    inst mem_0_0 of split_data_arrays_0_ext
    inst mem_0_1 of split_data_arrays_0_ext
    inst mem_0_2 of split_data_arrays_0_ext
    inst mem_0_3 of split_data_arrays_0_ext
    inst mem_0_4 of split_data_arrays_0_ext
    inst mem_0_5 of split_data_arrays_0_ext
    inst mem_0_6 of split_data_arrays_0_ext
    inst mem_0_7 of split_data_arrays_0_ext
    inst mem_0_8 of split_data_arrays_0_ext
    inst mem_0_9 of split_data_arrays_0_ext
    inst mem_0_10 of split_data_arrays_0_ext
    inst mem_0_11 of split_data_arrays_0_ext
    inst mem_0_12 of split_data_arrays_0_ext
    inst mem_0_13 of split_data_arrays_0_ext
    inst mem_0_14 of split_data_arrays_0_ext
    inst mem_0_15 of split_data_arrays_0_ext
    inst mem_0_16 of split_data_arrays_0_ext
    inst mem_0_17 of split_data_arrays_0_ext
    inst mem_0_18 of split_data_arrays_0_ext
    inst mem_0_19 of split_data_arrays_0_ext
    inst mem_0_20 of split_data_arrays_0_ext
    inst mem_0_21 of split_data_arrays_0_ext
    inst mem_0_22 of split_data_arrays_0_ext
    inst mem_0_23 of split_data_arrays_0_ext
    inst mem_0_24 of split_data_arrays_0_ext
    inst mem_0_25 of split_data_arrays_0_ext
    inst mem_0_26 of split_data_arrays_0_ext
    inst mem_0_27 of split_data_arrays_0_ext
    inst mem_0_28 of split_data_arrays_0_ext
    inst mem_0_29 of split_data_arrays_0_ext
    inst mem_0_30 of split_data_arrays_0_ext
    inst mem_0_31 of split_data_arrays_0_ext
    node RW0_rdata_0_0 = mem_0_0.RW0_rdata
    node RW0_rdata_0_1 = mem_0_1.RW0_rdata
    node RW0_rdata_0_2 = mem_0_2.RW0_rdata
    node RW0_rdata_0_3 = mem_0_3.RW0_rdata
    node RW0_rdata_0_4 = mem_0_4.RW0_rdata
    node RW0_rdata_0_5 = mem_0_5.RW0_rdata
    node RW0_rdata_0_6 = mem_0_6.RW0_rdata
    node RW0_rdata_0_7 = mem_0_7.RW0_rdata
    node RW0_rdata_0_8 = mem_0_8.RW0_rdata
    node RW0_rdata_0_9 = mem_0_9.RW0_rdata
    node RW0_rdata_0_10 = mem_0_10.RW0_rdata
    node RW0_rdata_0_11 = mem_0_11.RW0_rdata
    node RW0_rdata_0_12 = mem_0_12.RW0_rdata
    node RW0_rdata_0_13 = mem_0_13.RW0_rdata
    node RW0_rdata_0_14 = mem_0_14.RW0_rdata
    node RW0_rdata_0_15 = mem_0_15.RW0_rdata
    node RW0_rdata_0_16 = mem_0_16.RW0_rdata
    node RW0_rdata_0_17 = mem_0_17.RW0_rdata
    node RW0_rdata_0_18 = mem_0_18.RW0_rdata
    node RW0_rdata_0_19 = mem_0_19.RW0_rdata
    node RW0_rdata_0_20 = mem_0_20.RW0_rdata
    node RW0_rdata_0_21 = mem_0_21.RW0_rdata
    node RW0_rdata_0_22 = mem_0_22.RW0_rdata
    node RW0_rdata_0_23 = mem_0_23.RW0_rdata
    node RW0_rdata_0_24 = mem_0_24.RW0_rdata
    node RW0_rdata_0_25 = mem_0_25.RW0_rdata
    node RW0_rdata_0_26 = mem_0_26.RW0_rdata
    node RW0_rdata_0_27 = mem_0_27.RW0_rdata
    node RW0_rdata_0_28 = mem_0_28.RW0_rdata
    node RW0_rdata_0_29 = mem_0_29.RW0_rdata
    node RW0_rdata_0_30 = mem_0_30.RW0_rdata
    node RW0_rdata_0_31 = mem_0_31.RW0_rdata
    node _GEN_0 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_1 = cat(RW0_rdata_0_2, _GEN_0)
    node _GEN_2 = cat(RW0_rdata_0_3, _GEN_1)
    node _GEN_3 = cat(RW0_rdata_0_4, _GEN_2)
    node _GEN_4 = cat(RW0_rdata_0_5, _GEN_3)
    node _GEN_5 = cat(RW0_rdata_0_6, _GEN_4)
    node _GEN_6 = cat(RW0_rdata_0_7, _GEN_5)
    node _GEN_7 = cat(RW0_rdata_0_8, _GEN_6)
    node _GEN_8 = cat(RW0_rdata_0_9, _GEN_7)
    node _GEN_9 = cat(RW0_rdata_0_10, _GEN_8)
    node _GEN_10 = cat(RW0_rdata_0_11, _GEN_9)
    node _GEN_11 = cat(RW0_rdata_0_12, _GEN_10)
    node _GEN_12 = cat(RW0_rdata_0_13, _GEN_11)
    node _GEN_13 = cat(RW0_rdata_0_14, _GEN_12)
    node _GEN_14 = cat(RW0_rdata_0_15, _GEN_13)
    node _GEN_15 = cat(RW0_rdata_0_16, _GEN_14)
    node _GEN_16 = cat(RW0_rdata_0_17, _GEN_15)
    node _GEN_17 = cat(RW0_rdata_0_18, _GEN_16)
    node _GEN_18 = cat(RW0_rdata_0_19, _GEN_17)
    node _GEN_19 = cat(RW0_rdata_0_20, _GEN_18)
    node _GEN_20 = cat(RW0_rdata_0_21, _GEN_19)
    node _GEN_21 = cat(RW0_rdata_0_22, _GEN_20)
    node _GEN_22 = cat(RW0_rdata_0_23, _GEN_21)
    node _GEN_23 = cat(RW0_rdata_0_24, _GEN_22)
    node _GEN_24 = cat(RW0_rdata_0_25, _GEN_23)
    node _GEN_25 = cat(RW0_rdata_0_26, _GEN_24)
    node _GEN_26 = cat(RW0_rdata_0_27, _GEN_25)
    node _GEN_27 = cat(RW0_rdata_0_28, _GEN_26)
    node _GEN_28 = cat(RW0_rdata_0_29, _GEN_27)
    node _GEN_29 = cat(RW0_rdata_0_30, _GEN_28)
    node RW0_rdata_0 = cat(RW0_rdata_0_31, _GEN_29)
    node _GEN_30 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_31 = cat(RW0_rdata_0_2, _GEN_0)
    node _GEN_32 = cat(RW0_rdata_0_3, _GEN_1)
    node _GEN_33 = cat(RW0_rdata_0_4, _GEN_2)
    node _GEN_34 = cat(RW0_rdata_0_5, _GEN_3)
    node _GEN_35 = cat(RW0_rdata_0_6, _GEN_4)
    node _GEN_36 = cat(RW0_rdata_0_7, _GEN_5)
    node _GEN_37 = cat(RW0_rdata_0_8, _GEN_6)
    node _GEN_38 = cat(RW0_rdata_0_9, _GEN_7)
    node _GEN_39 = cat(RW0_rdata_0_10, _GEN_8)
    node _GEN_40 = cat(RW0_rdata_0_11, _GEN_9)
    node _GEN_41 = cat(RW0_rdata_0_12, _GEN_10)
    node _GEN_42 = cat(RW0_rdata_0_13, _GEN_11)
    node _GEN_43 = cat(RW0_rdata_0_14, _GEN_12)
    node _GEN_44 = cat(RW0_rdata_0_15, _GEN_13)
    node _GEN_45 = cat(RW0_rdata_0_16, _GEN_14)
    node _GEN_46 = cat(RW0_rdata_0_17, _GEN_15)
    node _GEN_47 = cat(RW0_rdata_0_18, _GEN_16)
    node _GEN_48 = cat(RW0_rdata_0_19, _GEN_17)
    node _GEN_49 = cat(RW0_rdata_0_20, _GEN_18)
    node _GEN_50 = cat(RW0_rdata_0_21, _GEN_19)
    node _GEN_51 = cat(RW0_rdata_0_22, _GEN_20)
    node _GEN_52 = cat(RW0_rdata_0_23, _GEN_21)
    node _GEN_53 = cat(RW0_rdata_0_24, _GEN_22)
    node _GEN_54 = cat(RW0_rdata_0_25, _GEN_23)
    node _GEN_55 = cat(RW0_rdata_0_26, _GEN_24)
    node _GEN_56 = cat(RW0_rdata_0_27, _GEN_25)
    node _GEN_57 = cat(RW0_rdata_0_28, _GEN_26)
    node _GEN_58 = cat(RW0_rdata_0_29, _GEN_27)
    node _GEN_59 = cat(RW0_rdata_0_30, _GEN_28)
    RW0_rdata <= cat(RW0_rdata_0_31, _GEN_29)
    mem_0_0.RW0_addr <= RW0_addr
    mem_0_0.RW0_clk <= RW0_clk
    mem_0_0.RW0_wdata <= bits(RW0_wdata, 7, 0)
    mem_0_0.RW0_en <= RW0_en
    mem_0_0.RW0_wmode <= RW0_wmode
    mem_0_0.RW0_wmask <= bits(RW0_wmask, 0, 0)
    mem_0_1.RW0_addr <= RW0_addr
    mem_0_1.RW0_clk <= RW0_clk
    mem_0_1.RW0_wdata <= bits(RW0_wdata, 15, 8)
    mem_0_1.RW0_en <= RW0_en
    mem_0_1.RW0_wmode <= RW0_wmode
    mem_0_1.RW0_wmask <= bits(RW0_wmask, 1, 1)
    mem_0_2.RW0_addr <= RW0_addr
    mem_0_2.RW0_clk <= RW0_clk
    mem_0_2.RW0_wdata <= bits(RW0_wdata, 23, 16)
    mem_0_2.RW0_en <= RW0_en
    mem_0_2.RW0_wmode <= RW0_wmode
    mem_0_2.RW0_wmask <= bits(RW0_wmask, 2, 2)
    mem_0_3.RW0_addr <= RW0_addr
    mem_0_3.RW0_clk <= RW0_clk
    mem_0_3.RW0_wdata <= bits(RW0_wdata, 31, 24)
    mem_0_3.RW0_en <= RW0_en
    mem_0_3.RW0_wmode <= RW0_wmode
    mem_0_3.RW0_wmask <= bits(RW0_wmask, 3, 3)
    mem_0_4.RW0_addr <= RW0_addr
    mem_0_4.RW0_clk <= RW0_clk
    mem_0_4.RW0_wdata <= bits(RW0_wdata, 39, 32)
    mem_0_4.RW0_en <= RW0_en
    mem_0_4.RW0_wmode <= RW0_wmode
    mem_0_4.RW0_wmask <= bits(RW0_wmask, 4, 4)
    mem_0_5.RW0_addr <= RW0_addr
    mem_0_5.RW0_clk <= RW0_clk
    mem_0_5.RW0_wdata <= bits(RW0_wdata, 47, 40)
    mem_0_5.RW0_en <= RW0_en
    mem_0_5.RW0_wmode <= RW0_wmode
    mem_0_5.RW0_wmask <= bits(RW0_wmask, 5, 5)
    mem_0_6.RW0_addr <= RW0_addr
    mem_0_6.RW0_clk <= RW0_clk
    mem_0_6.RW0_wdata <= bits(RW0_wdata, 55, 48)
    mem_0_6.RW0_en <= RW0_en
    mem_0_6.RW0_wmode <= RW0_wmode
    mem_0_6.RW0_wmask <= bits(RW0_wmask, 6, 6)
    mem_0_7.RW0_addr <= RW0_addr
    mem_0_7.RW0_clk <= RW0_clk
    mem_0_7.RW0_wdata <= bits(RW0_wdata, 63, 56)
    mem_0_7.RW0_en <= RW0_en
    mem_0_7.RW0_wmode <= RW0_wmode
    mem_0_7.RW0_wmask <= bits(RW0_wmask, 7, 7)
    mem_0_8.RW0_addr <= RW0_addr
    mem_0_8.RW0_clk <= RW0_clk
    mem_0_8.RW0_wdata <= bits(RW0_wdata, 71, 64)
    mem_0_8.RW0_en <= RW0_en
    mem_0_8.RW0_wmode <= RW0_wmode
    mem_0_8.RW0_wmask <= bits(RW0_wmask, 8, 8)
    mem_0_9.RW0_addr <= RW0_addr
    mem_0_9.RW0_clk <= RW0_clk
    mem_0_9.RW0_wdata <= bits(RW0_wdata, 79, 72)
    mem_0_9.RW0_en <= RW0_en
    mem_0_9.RW0_wmode <= RW0_wmode
    mem_0_9.RW0_wmask <= bits(RW0_wmask, 9, 9)
    mem_0_10.RW0_addr <= RW0_addr
    mem_0_10.RW0_clk <= RW0_clk
    mem_0_10.RW0_wdata <= bits(RW0_wdata, 87, 80)
    mem_0_10.RW0_en <= RW0_en
    mem_0_10.RW0_wmode <= RW0_wmode
    mem_0_10.RW0_wmask <= bits(RW0_wmask, 10, 10)
    mem_0_11.RW0_addr <= RW0_addr
    mem_0_11.RW0_clk <= RW0_clk
    mem_0_11.RW0_wdata <= bits(RW0_wdata, 95, 88)
    mem_0_11.RW0_en <= RW0_en
    mem_0_11.RW0_wmode <= RW0_wmode
    mem_0_11.RW0_wmask <= bits(RW0_wmask, 11, 11)
    mem_0_12.RW0_addr <= RW0_addr
    mem_0_12.RW0_clk <= RW0_clk
    mem_0_12.RW0_wdata <= bits(RW0_wdata, 103, 96)
    mem_0_12.RW0_en <= RW0_en
    mem_0_12.RW0_wmode <= RW0_wmode
    mem_0_12.RW0_wmask <= bits(RW0_wmask, 12, 12)
    mem_0_13.RW0_addr <= RW0_addr
    mem_0_13.RW0_clk <= RW0_clk
    mem_0_13.RW0_wdata <= bits(RW0_wdata, 111, 104)
    mem_0_13.RW0_en <= RW0_en
    mem_0_13.RW0_wmode <= RW0_wmode
    mem_0_13.RW0_wmask <= bits(RW0_wmask, 13, 13)
    mem_0_14.RW0_addr <= RW0_addr
    mem_0_14.RW0_clk <= RW0_clk
    mem_0_14.RW0_wdata <= bits(RW0_wdata, 119, 112)
    mem_0_14.RW0_en <= RW0_en
    mem_0_14.RW0_wmode <= RW0_wmode
    mem_0_14.RW0_wmask <= bits(RW0_wmask, 14, 14)
    mem_0_15.RW0_addr <= RW0_addr
    mem_0_15.RW0_clk <= RW0_clk
    mem_0_15.RW0_wdata <= bits(RW0_wdata, 127, 120)
    mem_0_15.RW0_en <= RW0_en
    mem_0_15.RW0_wmode <= RW0_wmode
    mem_0_15.RW0_wmask <= bits(RW0_wmask, 15, 15)
    mem_0_16.RW0_addr <= RW0_addr
    mem_0_16.RW0_clk <= RW0_clk
    mem_0_16.RW0_wdata <= bits(RW0_wdata, 135, 128)
    mem_0_16.RW0_en <= RW0_en
    mem_0_16.RW0_wmode <= RW0_wmode
    mem_0_16.RW0_wmask <= bits(RW0_wmask, 16, 16)
    mem_0_17.RW0_addr <= RW0_addr
    mem_0_17.RW0_clk <= RW0_clk
    mem_0_17.RW0_wdata <= bits(RW0_wdata, 143, 136)
    mem_0_17.RW0_en <= RW0_en
    mem_0_17.RW0_wmode <= RW0_wmode
    mem_0_17.RW0_wmask <= bits(RW0_wmask, 17, 17)
    mem_0_18.RW0_addr <= RW0_addr
    mem_0_18.RW0_clk <= RW0_clk
    mem_0_18.RW0_wdata <= bits(RW0_wdata, 151, 144)
    mem_0_18.RW0_en <= RW0_en
    mem_0_18.RW0_wmode <= RW0_wmode
    mem_0_18.RW0_wmask <= bits(RW0_wmask, 18, 18)
    mem_0_19.RW0_addr <= RW0_addr
    mem_0_19.RW0_clk <= RW0_clk
    mem_0_19.RW0_wdata <= bits(RW0_wdata, 159, 152)
    mem_0_19.RW0_en <= RW0_en
    mem_0_19.RW0_wmode <= RW0_wmode
    mem_0_19.RW0_wmask <= bits(RW0_wmask, 19, 19)
    mem_0_20.RW0_addr <= RW0_addr
    mem_0_20.RW0_clk <= RW0_clk
    mem_0_20.RW0_wdata <= bits(RW0_wdata, 167, 160)
    mem_0_20.RW0_en <= RW0_en
    mem_0_20.RW0_wmode <= RW0_wmode
    mem_0_20.RW0_wmask <= bits(RW0_wmask, 20, 20)
    mem_0_21.RW0_addr <= RW0_addr
    mem_0_21.RW0_clk <= RW0_clk
    mem_0_21.RW0_wdata <= bits(RW0_wdata, 175, 168)
    mem_0_21.RW0_en <= RW0_en
    mem_0_21.RW0_wmode <= RW0_wmode
    mem_0_21.RW0_wmask <= bits(RW0_wmask, 21, 21)
    mem_0_22.RW0_addr <= RW0_addr
    mem_0_22.RW0_clk <= RW0_clk
    mem_0_22.RW0_wdata <= bits(RW0_wdata, 183, 176)
    mem_0_22.RW0_en <= RW0_en
    mem_0_22.RW0_wmode <= RW0_wmode
    mem_0_22.RW0_wmask <= bits(RW0_wmask, 22, 22)
    mem_0_23.RW0_addr <= RW0_addr
    mem_0_23.RW0_clk <= RW0_clk
    mem_0_23.RW0_wdata <= bits(RW0_wdata, 191, 184)
    mem_0_23.RW0_en <= RW0_en
    mem_0_23.RW0_wmode <= RW0_wmode
    mem_0_23.RW0_wmask <= bits(RW0_wmask, 23, 23)
    mem_0_24.RW0_addr <= RW0_addr
    mem_0_24.RW0_clk <= RW0_clk
    mem_0_24.RW0_wdata <= bits(RW0_wdata, 199, 192)
    mem_0_24.RW0_en <= RW0_en
    mem_0_24.RW0_wmode <= RW0_wmode
    mem_0_24.RW0_wmask <= bits(RW0_wmask, 24, 24)
    mem_0_25.RW0_addr <= RW0_addr
    mem_0_25.RW0_clk <= RW0_clk
    mem_0_25.RW0_wdata <= bits(RW0_wdata, 207, 200)
    mem_0_25.RW0_en <= RW0_en
    mem_0_25.RW0_wmode <= RW0_wmode
    mem_0_25.RW0_wmask <= bits(RW0_wmask, 25, 25)
    mem_0_26.RW0_addr <= RW0_addr
    mem_0_26.RW0_clk <= RW0_clk
    mem_0_26.RW0_wdata <= bits(RW0_wdata, 215, 208)
    mem_0_26.RW0_en <= RW0_en
    mem_0_26.RW0_wmode <= RW0_wmode
    mem_0_26.RW0_wmask <= bits(RW0_wmask, 26, 26)
    mem_0_27.RW0_addr <= RW0_addr
    mem_0_27.RW0_clk <= RW0_clk
    mem_0_27.RW0_wdata <= bits(RW0_wdata, 223, 216)
    mem_0_27.RW0_en <= RW0_en
    mem_0_27.RW0_wmode <= RW0_wmode
    mem_0_27.RW0_wmask <= bits(RW0_wmask, 27, 27)
    mem_0_28.RW0_addr <= RW0_addr
    mem_0_28.RW0_clk <= RW0_clk
    mem_0_28.RW0_wdata <= bits(RW0_wdata, 231, 224)
    mem_0_28.RW0_en <= RW0_en
    mem_0_28.RW0_wmode <= RW0_wmode
    mem_0_28.RW0_wmask <= bits(RW0_wmask, 28, 28)
    mem_0_29.RW0_addr <= RW0_addr
    mem_0_29.RW0_clk <= RW0_clk
    mem_0_29.RW0_wdata <= bits(RW0_wdata, 239, 232)
    mem_0_29.RW0_en <= RW0_en
    mem_0_29.RW0_wmode <= RW0_wmode
    mem_0_29.RW0_wmask <= bits(RW0_wmask, 29, 29)
    mem_0_30.RW0_addr <= RW0_addr
    mem_0_30.RW0_clk <= RW0_clk
    mem_0_30.RW0_wdata <= bits(RW0_wdata, 247, 240)
    mem_0_30.RW0_en <= RW0_en
    mem_0_30.RW0_wmode <= RW0_wmode
    mem_0_30.RW0_wmask <= bits(RW0_wmask, 30, 30)
    mem_0_31.RW0_addr <= RW0_addr
    mem_0_31.RW0_clk <= RW0_clk
    mem_0_31.RW0_wdata <= bits(RW0_wdata, 255, 248)
    mem_0_31.RW0_en <= RW0_en
    mem_0_31.RW0_wmode <= RW0_wmode
    mem_0_31.RW0_wmask <= bits(RW0_wmask, 31, 31)

  module tag_array_ext :
    input RW0_addr : UInt<6>
    input RW0_clk : Clock
    input RW0_wdata : UInt<88>
    output RW0_rdata : UInt<88>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<4>
  
    inst mem_0_0 of split_tag_array_ext
    inst mem_0_1 of split_tag_array_ext
    inst mem_0_2 of split_tag_array_ext
    inst mem_0_3 of split_tag_array_ext
    node RW0_rdata_0_0 = mem_0_0.RW0_rdata
    node RW0_rdata_0_1 = mem_0_1.RW0_rdata
    node RW0_rdata_0_2 = mem_0_2.RW0_rdata
    node RW0_rdata_0_3 = mem_0_3.RW0_rdata
    node _GEN_0 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_1 = cat(RW0_rdata_0_2, _GEN_0)
    node RW0_rdata_0 = cat(RW0_rdata_0_3, _GEN_1)
    node _GEN_2 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_3 = cat(RW0_rdata_0_2, _GEN_0)
    RW0_rdata <= cat(RW0_rdata_0_3, _GEN_1)
    mem_0_0.RW0_addr <= RW0_addr
    mem_0_0.RW0_clk <= RW0_clk
    mem_0_0.RW0_wdata <= bits(RW0_wdata, 21, 0)
    mem_0_0.RW0_en <= RW0_en
    mem_0_0.RW0_wmode <= RW0_wmode
    mem_0_0.RW0_wmask <= bits(RW0_wmask, 0, 0)
    mem_0_1.RW0_addr <= RW0_addr
    mem_0_1.RW0_clk <= RW0_clk
    mem_0_1.RW0_wdata <= bits(RW0_wdata, 43, 22)
    mem_0_1.RW0_en <= RW0_en
    mem_0_1.RW0_wmode <= RW0_wmode
    mem_0_1.RW0_wmask <= bits(RW0_wmask, 1, 1)
    mem_0_2.RW0_addr <= RW0_addr
    mem_0_2.RW0_clk <= RW0_clk
    mem_0_2.RW0_wdata <= bits(RW0_wdata, 65, 44)
    mem_0_2.RW0_en <= RW0_en
    mem_0_2.RW0_wmode <= RW0_wmode
    mem_0_2.RW0_wmask <= bits(RW0_wmask, 2, 2)
    mem_0_3.RW0_addr <= RW0_addr
    mem_0_3.RW0_clk <= RW0_clk
    mem_0_3.RW0_wdata <= bits(RW0_wdata, 87, 66)
    mem_0_3.RW0_en <= RW0_en
    mem_0_3.RW0_wmode <= RW0_wmode
    mem_0_3.RW0_wmask <= bits(RW0_wmask, 3, 3)

  module mem_ext :
    input W0_addr : UInt<12>
    input W0_clk : Clock
    input W0_data : UInt<128>
    input W0_en : UInt<1>
    input W0_mask : UInt<16>
    input R0_addr : UInt<12>
    input R0_clk : Clock
    output R0_data : UInt<128>
    input R0_en : UInt<1>
  
    inst mem_0_0 of split_mem_ext
    inst mem_0_1 of split_mem_ext
    inst mem_0_2 of split_mem_ext
    inst mem_0_3 of split_mem_ext
    inst mem_0_4 of split_mem_ext
    inst mem_0_5 of split_mem_ext
    inst mem_0_6 of split_mem_ext
    inst mem_0_7 of split_mem_ext
    inst mem_0_8 of split_mem_ext
    inst mem_0_9 of split_mem_ext
    inst mem_0_10 of split_mem_ext
    inst mem_0_11 of split_mem_ext
    inst mem_0_12 of split_mem_ext
    inst mem_0_13 of split_mem_ext
    inst mem_0_14 of split_mem_ext
    inst mem_0_15 of split_mem_ext
    node R0_data_0_0 = mem_0_0.R0_data
    node R0_data_0_1 = mem_0_1.R0_data
    node R0_data_0_2 = mem_0_2.R0_data
    node R0_data_0_3 = mem_0_3.R0_data
    node R0_data_0_4 = mem_0_4.R0_data
    node R0_data_0_5 = mem_0_5.R0_data
    node R0_data_0_6 = mem_0_6.R0_data
    node R0_data_0_7 = mem_0_7.R0_data
    node R0_data_0_8 = mem_0_8.R0_data
    node R0_data_0_9 = mem_0_9.R0_data
    node R0_data_0_10 = mem_0_10.R0_data
    node R0_data_0_11 = mem_0_11.R0_data
    node R0_data_0_12 = mem_0_12.R0_data
    node R0_data_0_13 = mem_0_13.R0_data
    node R0_data_0_14 = mem_0_14.R0_data
    node R0_data_0_15 = mem_0_15.R0_data
    node _GEN_0 = cat(R0_data_0_1, R0_data_0_0)
    node _GEN_1 = cat(R0_data_0_2, _GEN_0)
    node _GEN_2 = cat(R0_data_0_3, _GEN_1)
    node _GEN_3 = cat(R0_data_0_4, _GEN_2)
    node _GEN_4 = cat(R0_data_0_5, _GEN_3)
    node _GEN_5 = cat(R0_data_0_6, _GEN_4)
    node _GEN_6 = cat(R0_data_0_7, _GEN_5)
    node _GEN_7 = cat(R0_data_0_8, _GEN_6)
    node _GEN_8 = cat(R0_data_0_9, _GEN_7)
    node _GEN_9 = cat(R0_data_0_10, _GEN_8)
    node _GEN_10 = cat(R0_data_0_11, _GEN_9)
    node _GEN_11 = cat(R0_data_0_12, _GEN_10)
    node _GEN_12 = cat(R0_data_0_13, _GEN_11)
    node _GEN_13 = cat(R0_data_0_14, _GEN_12)
    node R0_data_0 = cat(R0_data_0_15, _GEN_13)
    node _GEN_14 = cat(R0_data_0_1, R0_data_0_0)
    node _GEN_15 = cat(R0_data_0_2, _GEN_0)
    node _GEN_16 = cat(R0_data_0_3, _GEN_1)
    node _GEN_17 = cat(R0_data_0_4, _GEN_2)
    node _GEN_18 = cat(R0_data_0_5, _GEN_3)
    node _GEN_19 = cat(R0_data_0_6, _GEN_4)
    node _GEN_20 = cat(R0_data_0_7, _GEN_5)
    node _GEN_21 = cat(R0_data_0_8, _GEN_6)
    node _GEN_22 = cat(R0_data_0_9, _GEN_7)
    node _GEN_23 = cat(R0_data_0_10, _GEN_8)
    node _GEN_24 = cat(R0_data_0_11, _GEN_9)
    node _GEN_25 = cat(R0_data_0_12, _GEN_10)
    node _GEN_26 = cat(R0_data_0_13, _GEN_11)
    node _GEN_27 = cat(R0_data_0_14, _GEN_12)
    R0_data <= cat(R0_data_0_15, _GEN_13)
    mem_0_0.W0_addr <= W0_addr
    mem_0_0.W0_clk <= W0_clk
    mem_0_0.W0_data <= bits(W0_data, 7, 0)
    mem_0_0.W0_en <= W0_en
    mem_0_0.W0_mask <= bits(W0_mask, 0, 0)
    mem_0_0.R0_addr <= R0_addr
    mem_0_0.R0_clk <= R0_clk
    mem_0_0.R0_en <= R0_en
    mem_0_1.W0_addr <= W0_addr
    mem_0_1.W0_clk <= W0_clk
    mem_0_1.W0_data <= bits(W0_data, 15, 8)
    mem_0_1.W0_en <= W0_en
    mem_0_1.W0_mask <= bits(W0_mask, 1, 1)
    mem_0_1.R0_addr <= R0_addr
    mem_0_1.R0_clk <= R0_clk
    mem_0_1.R0_en <= R0_en
    mem_0_2.W0_addr <= W0_addr
    mem_0_2.W0_clk <= W0_clk
    mem_0_2.W0_data <= bits(W0_data, 23, 16)
    mem_0_2.W0_en <= W0_en
    mem_0_2.W0_mask <= bits(W0_mask, 2, 2)
    mem_0_2.R0_addr <= R0_addr
    mem_0_2.R0_clk <= R0_clk
    mem_0_2.R0_en <= R0_en
    mem_0_3.W0_addr <= W0_addr
    mem_0_3.W0_clk <= W0_clk
    mem_0_3.W0_data <= bits(W0_data, 31, 24)
    mem_0_3.W0_en <= W0_en
    mem_0_3.W0_mask <= bits(W0_mask, 3, 3)
    mem_0_3.R0_addr <= R0_addr
    mem_0_3.R0_clk <= R0_clk
    mem_0_3.R0_en <= R0_en
    mem_0_4.W0_addr <= W0_addr
    mem_0_4.W0_clk <= W0_clk
    mem_0_4.W0_data <= bits(W0_data, 39, 32)
    mem_0_4.W0_en <= W0_en
    mem_0_4.W0_mask <= bits(W0_mask, 4, 4)
    mem_0_4.R0_addr <= R0_addr
    mem_0_4.R0_clk <= R0_clk
    mem_0_4.R0_en <= R0_en
    mem_0_5.W0_addr <= W0_addr
    mem_0_5.W0_clk <= W0_clk
    mem_0_5.W0_data <= bits(W0_data, 47, 40)
    mem_0_5.W0_en <= W0_en
    mem_0_5.W0_mask <= bits(W0_mask, 5, 5)
    mem_0_5.R0_addr <= R0_addr
    mem_0_5.R0_clk <= R0_clk
    mem_0_5.R0_en <= R0_en
    mem_0_6.W0_addr <= W0_addr
    mem_0_6.W0_clk <= W0_clk
    mem_0_6.W0_data <= bits(W0_data, 55, 48)
    mem_0_6.W0_en <= W0_en
    mem_0_6.W0_mask <= bits(W0_mask, 6, 6)
    mem_0_6.R0_addr <= R0_addr
    mem_0_6.R0_clk <= R0_clk
    mem_0_6.R0_en <= R0_en
    mem_0_7.W0_addr <= W0_addr
    mem_0_7.W0_clk <= W0_clk
    mem_0_7.W0_data <= bits(W0_data, 63, 56)
    mem_0_7.W0_en <= W0_en
    mem_0_7.W0_mask <= bits(W0_mask, 7, 7)
    mem_0_7.R0_addr <= R0_addr
    mem_0_7.R0_clk <= R0_clk
    mem_0_7.R0_en <= R0_en
    mem_0_8.W0_addr <= W0_addr
    mem_0_8.W0_clk <= W0_clk
    mem_0_8.W0_data <= bits(W0_data, 71, 64)
    mem_0_8.W0_en <= W0_en
    mem_0_8.W0_mask <= bits(W0_mask, 8, 8)
    mem_0_8.R0_addr <= R0_addr
    mem_0_8.R0_clk <= R0_clk
    mem_0_8.R0_en <= R0_en
    mem_0_9.W0_addr <= W0_addr
    mem_0_9.W0_clk <= W0_clk
    mem_0_9.W0_data <= bits(W0_data, 79, 72)
    mem_0_9.W0_en <= W0_en
    mem_0_9.W0_mask <= bits(W0_mask, 9, 9)
    mem_0_9.R0_addr <= R0_addr
    mem_0_9.R0_clk <= R0_clk
    mem_0_9.R0_en <= R0_en
    mem_0_10.W0_addr <= W0_addr
    mem_0_10.W0_clk <= W0_clk
    mem_0_10.W0_data <= bits(W0_data, 87, 80)
    mem_0_10.W0_en <= W0_en
    mem_0_10.W0_mask <= bits(W0_mask, 10, 10)
    mem_0_10.R0_addr <= R0_addr
    mem_0_10.R0_clk <= R0_clk
    mem_0_10.R0_en <= R0_en
    mem_0_11.W0_addr <= W0_addr
    mem_0_11.W0_clk <= W0_clk
    mem_0_11.W0_data <= bits(W0_data, 95, 88)
    mem_0_11.W0_en <= W0_en
    mem_0_11.W0_mask <= bits(W0_mask, 11, 11)
    mem_0_11.R0_addr <= R0_addr
    mem_0_11.R0_clk <= R0_clk
    mem_0_11.R0_en <= R0_en
    mem_0_12.W0_addr <= W0_addr
    mem_0_12.W0_clk <= W0_clk
    mem_0_12.W0_data <= bits(W0_data, 103, 96)
    mem_0_12.W0_en <= W0_en
    mem_0_12.W0_mask <= bits(W0_mask, 12, 12)
    mem_0_12.R0_addr <= R0_addr
    mem_0_12.R0_clk <= R0_clk
    mem_0_12.R0_en <= R0_en
    mem_0_13.W0_addr <= W0_addr
    mem_0_13.W0_clk <= W0_clk
    mem_0_13.W0_data <= bits(W0_data, 111, 104)
    mem_0_13.W0_en <= W0_en
    mem_0_13.W0_mask <= bits(W0_mask, 13, 13)
    mem_0_13.R0_addr <= R0_addr
    mem_0_13.R0_clk <= R0_clk
    mem_0_13.R0_en <= R0_en
    mem_0_14.W0_addr <= W0_addr
    mem_0_14.W0_clk <= W0_clk
    mem_0_14.W0_data <= bits(W0_data, 119, 112)
    mem_0_14.W0_en <= W0_en
    mem_0_14.W0_mask <= bits(W0_mask, 14, 14)
    mem_0_14.R0_addr <= R0_addr
    mem_0_14.R0_clk <= R0_clk
    mem_0_14.R0_en <= R0_en
    mem_0_15.W0_addr <= W0_addr
    mem_0_15.W0_clk <= W0_clk
    mem_0_15.W0_data <= bits(W0_data, 127, 120)
    mem_0_15.W0_en <= W0_en
    mem_0_15.W0_mask <= bits(W0_mask, 15, 15)
    mem_0_15.R0_addr <= R0_addr
    mem_0_15.R0_clk <= R0_clk
    mem_0_15.R0_en <= R0_en

  module mem_0_ext :
    input W0_addr : UInt<10>
    input W0_clk : Clock
    input W0_data : UInt<512>
    input W0_en : UInt<1>
    input R0_addr : UInt<10>
    input R0_clk : Clock
    output R0_data : UInt<512>
    input R0_en : UInt<1>
  
    inst mem_0_0 of split_mem_0_ext
    node R0_data_0_0 = mem_0_0.R0_data
    node R0_data_0 = R0_data_0_0
    R0_data <= mem_0_0.R0_data
    mem_0_0.W0_addr <= W0_addr
    mem_0_0.W0_clk <= W0_clk
    mem_0_0.W0_data <= W0_data
    mem_0_0.W0_en <= W0_en
    mem_0_0.R0_addr <= R0_addr
    mem_0_0.R0_clk <= R0_clk
    mem_0_0.R0_en <= R0_en

  module tag_array_0_ext :
    input RW0_addr : UInt<6>
    input RW0_clk : Clock
    input RW0_wdata : UInt<84>
    output RW0_rdata : UInt<84>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<4>
  
    inst mem_0_0 of split_tag_array_0_ext
    inst mem_0_1 of split_tag_array_0_ext
    inst mem_0_2 of split_tag_array_0_ext
    inst mem_0_3 of split_tag_array_0_ext
    node RW0_rdata_0_0 = mem_0_0.RW0_rdata
    node RW0_rdata_0_1 = mem_0_1.RW0_rdata
    node RW0_rdata_0_2 = mem_0_2.RW0_rdata
    node RW0_rdata_0_3 = mem_0_3.RW0_rdata
    node _GEN_0 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_1 = cat(RW0_rdata_0_2, _GEN_0)
    node RW0_rdata_0 = cat(RW0_rdata_0_3, _GEN_1)
    node _GEN_2 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_3 = cat(RW0_rdata_0_2, _GEN_0)
    RW0_rdata <= cat(RW0_rdata_0_3, _GEN_1)
    mem_0_0.RW0_addr <= RW0_addr
    mem_0_0.RW0_clk <= RW0_clk
    mem_0_0.RW0_wdata <= bits(RW0_wdata, 20, 0)
    mem_0_0.RW0_en <= RW0_en
    mem_0_0.RW0_wmode <= RW0_wmode
    mem_0_0.RW0_wmask <= bits(RW0_wmask, 0, 0)
    mem_0_1.RW0_addr <= RW0_addr
    mem_0_1.RW0_clk <= RW0_clk
    mem_0_1.RW0_wdata <= bits(RW0_wdata, 41, 21)
    mem_0_1.RW0_en <= RW0_en
    mem_0_1.RW0_wmode <= RW0_wmode
    mem_0_1.RW0_wmask <= bits(RW0_wmask, 1, 1)
    mem_0_2.RW0_addr <= RW0_addr
    mem_0_2.RW0_clk <= RW0_clk
    mem_0_2.RW0_wdata <= bits(RW0_wdata, 62, 42)
    mem_0_2.RW0_en <= RW0_en
    mem_0_2.RW0_wmode <= RW0_wmode
    mem_0_2.RW0_wmask <= bits(RW0_wmask, 2, 2)
    mem_0_3.RW0_addr <= RW0_addr
    mem_0_3.RW0_clk <= RW0_clk
    mem_0_3.RW0_wdata <= bits(RW0_wdata, 83, 63)
    mem_0_3.RW0_en <= RW0_en
    mem_0_3.RW0_wmode <= RW0_wmode
    mem_0_3.RW0_wmask <= bits(RW0_wmask, 3, 3)

  module data_arrays_0_0_ext :
    input RW0_addr : UInt<8>
    input RW0_clk : Clock
    input RW0_wdata : UInt<128>
    output RW0_rdata : UInt<128>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<4>
  
    inst mem_0_0 of split_data_arrays_0_0_ext
    inst mem_0_1 of split_data_arrays_0_0_ext
    inst mem_0_2 of split_data_arrays_0_0_ext
    inst mem_0_3 of split_data_arrays_0_0_ext
    node RW0_rdata_0_0 = mem_0_0.RW0_rdata
    node RW0_rdata_0_1 = mem_0_1.RW0_rdata
    node RW0_rdata_0_2 = mem_0_2.RW0_rdata
    node RW0_rdata_0_3 = mem_0_3.RW0_rdata
    node _GEN_0 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_1 = cat(RW0_rdata_0_2, _GEN_0)
    node RW0_rdata_0 = cat(RW0_rdata_0_3, _GEN_1)
    node _GEN_2 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_3 = cat(RW0_rdata_0_2, _GEN_0)
    RW0_rdata <= cat(RW0_rdata_0_3, _GEN_1)
    mem_0_0.RW0_addr <= RW0_addr
    mem_0_0.RW0_clk <= RW0_clk
    mem_0_0.RW0_wdata <= bits(RW0_wdata, 31, 0)
    mem_0_0.RW0_en <= RW0_en
    mem_0_0.RW0_wmode <= RW0_wmode
    mem_0_0.RW0_wmask <= bits(RW0_wmask, 0, 0)
    mem_0_1.RW0_addr <= RW0_addr
    mem_0_1.RW0_clk <= RW0_clk
    mem_0_1.RW0_wdata <= bits(RW0_wdata, 63, 32)
    mem_0_1.RW0_en <= RW0_en
    mem_0_1.RW0_wmode <= RW0_wmode
    mem_0_1.RW0_wmask <= bits(RW0_wmask, 1, 1)
    mem_0_2.RW0_addr <= RW0_addr
    mem_0_2.RW0_clk <= RW0_clk
    mem_0_2.RW0_wdata <= bits(RW0_wdata, 95, 64)
    mem_0_2.RW0_en <= RW0_en
    mem_0_2.RW0_wmode <= RW0_wmode
    mem_0_2.RW0_wmask <= bits(RW0_wmask, 2, 2)
    mem_0_3.RW0_addr <= RW0_addr
    mem_0_3.RW0_clk <= RW0_clk
    mem_0_3.RW0_wdata <= bits(RW0_wdata, 127, 96)
    mem_0_3.RW0_en <= RW0_en
    mem_0_3.RW0_wmode <= RW0_wmode
    mem_0_3.RW0_wmask <= bits(RW0_wmask, 3, 3)

  module cc_dir_ext :
    input RW0_addr : UInt<10>
    input RW0_clk : Clock
    input RW0_wdata : UInt<128>
    output RW0_rdata : UInt<128>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<8>
  
    inst mem_0_0 of split_cc_dir_ext
    inst mem_0_1 of split_cc_dir_ext
    inst mem_0_2 of split_cc_dir_ext
    inst mem_0_3 of split_cc_dir_ext
    inst mem_0_4 of split_cc_dir_ext
    inst mem_0_5 of split_cc_dir_ext
    inst mem_0_6 of split_cc_dir_ext
    inst mem_0_7 of split_cc_dir_ext
    node RW0_rdata_0_0 = mem_0_0.RW0_rdata
    node RW0_rdata_0_1 = mem_0_1.RW0_rdata
    node RW0_rdata_0_2 = mem_0_2.RW0_rdata
    node RW0_rdata_0_3 = mem_0_3.RW0_rdata
    node RW0_rdata_0_4 = mem_0_4.RW0_rdata
    node RW0_rdata_0_5 = mem_0_5.RW0_rdata
    node RW0_rdata_0_6 = mem_0_6.RW0_rdata
    node RW0_rdata_0_7 = mem_0_7.RW0_rdata
    node _GEN_0 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_1 = cat(RW0_rdata_0_2, _GEN_0)
    node _GEN_2 = cat(RW0_rdata_0_3, _GEN_1)
    node _GEN_3 = cat(RW0_rdata_0_4, _GEN_2)
    node _GEN_4 = cat(RW0_rdata_0_5, _GEN_3)
    node _GEN_5 = cat(RW0_rdata_0_6, _GEN_4)
    node RW0_rdata_0 = cat(RW0_rdata_0_7, _GEN_5)
    node _GEN_6 = cat(RW0_rdata_0_1, RW0_rdata_0_0)
    node _GEN_7 = cat(RW0_rdata_0_2, _GEN_0)
    node _GEN_8 = cat(RW0_rdata_0_3, _GEN_1)
    node _GEN_9 = cat(RW0_rdata_0_4, _GEN_2)
    node _GEN_10 = cat(RW0_rdata_0_5, _GEN_3)
    node _GEN_11 = cat(RW0_rdata_0_6, _GEN_4)
    RW0_rdata <= cat(RW0_rdata_0_7, _GEN_5)
    mem_0_0.RW0_addr <= RW0_addr
    mem_0_0.RW0_clk <= RW0_clk
    mem_0_0.RW0_wdata <= bits(RW0_wdata, 15, 0)
    mem_0_0.RW0_en <= RW0_en
    mem_0_0.RW0_wmode <= RW0_wmode
    mem_0_0.RW0_wmask <= bits(RW0_wmask, 0, 0)
    mem_0_1.RW0_addr <= RW0_addr
    mem_0_1.RW0_clk <= RW0_clk
    mem_0_1.RW0_wdata <= bits(RW0_wdata, 31, 16)
    mem_0_1.RW0_en <= RW0_en
    mem_0_1.RW0_wmode <= RW0_wmode
    mem_0_1.RW0_wmask <= bits(RW0_wmask, 1, 1)
    mem_0_2.RW0_addr <= RW0_addr
    mem_0_2.RW0_clk <= RW0_clk
    mem_0_2.RW0_wdata <= bits(RW0_wdata, 47, 32)
    mem_0_2.RW0_en <= RW0_en
    mem_0_2.RW0_wmode <= RW0_wmode
    mem_0_2.RW0_wmask <= bits(RW0_wmask, 2, 2)
    mem_0_3.RW0_addr <= RW0_addr
    mem_0_3.RW0_clk <= RW0_clk
    mem_0_3.RW0_wdata <= bits(RW0_wdata, 63, 48)
    mem_0_3.RW0_en <= RW0_en
    mem_0_3.RW0_wmode <= RW0_wmode
    mem_0_3.RW0_wmask <= bits(RW0_wmask, 3, 3)
    mem_0_4.RW0_addr <= RW0_addr
    mem_0_4.RW0_clk <= RW0_clk
    mem_0_4.RW0_wdata <= bits(RW0_wdata, 79, 64)
    mem_0_4.RW0_en <= RW0_en
    mem_0_4.RW0_wmode <= RW0_wmode
    mem_0_4.RW0_wmask <= bits(RW0_wmask, 4, 4)
    mem_0_5.RW0_addr <= RW0_addr
    mem_0_5.RW0_clk <= RW0_clk
    mem_0_5.RW0_wdata <= bits(RW0_wdata, 95, 80)
    mem_0_5.RW0_en <= RW0_en
    mem_0_5.RW0_wmode <= RW0_wmode
    mem_0_5.RW0_wmask <= bits(RW0_wmask, 5, 5)
    mem_0_6.RW0_addr <= RW0_addr
    mem_0_6.RW0_clk <= RW0_clk
    mem_0_6.RW0_wdata <= bits(RW0_wdata, 111, 96)
    mem_0_6.RW0_en <= RW0_en
    mem_0_6.RW0_wmode <= RW0_wmode
    mem_0_6.RW0_wmask <= bits(RW0_wmask, 6, 6)
    mem_0_7.RW0_addr <= RW0_addr
    mem_0_7.RW0_clk <= RW0_clk
    mem_0_7.RW0_wdata <= bits(RW0_wdata, 127, 112)
    mem_0_7.RW0_en <= RW0_en
    mem_0_7.RW0_wmode <= RW0_wmode
    mem_0_7.RW0_wmask <= bits(RW0_wmask, 7, 7)

  module cc_banks_0_ext :
    input RW0_addr : UInt<13>
    input RW0_clk : Clock
    input RW0_wdata : UInt<64>
    output RW0_rdata : UInt<64>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
  
    inst mem_0_0 of split_cc_banks_0_ext
    node RW0_rdata_0_0 = mem_0_0.RW0_rdata
    node RW0_rdata_0 = RW0_rdata_0_0
    RW0_rdata <= mem_0_0.RW0_rdata
    mem_0_0.RW0_addr <= RW0_addr
    mem_0_0.RW0_clk <= RW0_clk
    mem_0_0.RW0_wdata <= RW0_wdata
    mem_0_0.RW0_en <= RW0_en
    mem_0_0.RW0_wmode <= RW0_wmode

  module split_data_arrays_0_ext :
    input RW0_addr : UInt<8>
    input RW0_clk : Clock
    input RW0_wdata : UInt<8>
    output RW0_rdata : UInt<8>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<1>
  
    mem ram :
      data-type => UInt<8>
      depth => 256
      read-latency => 0
      write-latency => 1
      reader => RW_0_r_0
      writer => RW_0_w_0
      read-under-write => undefined
    RW0_rdata <= ram.RW_0_r_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = RW0_en
    node _GEN_1 = RW0_wmode
    node _GEN_2 = RW0_wmask
    node _GEN_3 = RW0_wdata
    node _GEN_4 = RW0_addr
    ram.RW_0_w_0.clk <= RW0_clk
    ram.RW_0_w_0.en <= and(RW0_en, RW0_wmode)
    ram.RW_0_w_0.mask <= RW0_wmask
    ram.RW_0_w_0.addr <= RW0_addr
    ram.RW_0_w_0.data <= RW0_wdata
    node _GEN_5 = RW0_addr
    reg ram_RW_0_addr_pipe_0 : UInt<8>, RW0_clk with :
      reset => (UInt<1>("h0"), ram_RW_0_addr_pipe_0)
    node _GEN_6 = not(RW0_wmode)
    node ram_RW_0_addr_en = and(RW0_en, _GEN_6)
    ram_RW_0_addr_pipe_0 <= mux(ram_RW_0_addr_en, RW0_addr, ram_RW_0_addr_pipe_0)
    ram.RW_0_r_0.clk <= RW0_clk
    ram.RW_0_r_0.en <= RW0_en
    ram.RW_0_r_0.addr <= ram_RW_0_addr_pipe_0

  module split_tag_array_ext :
    input RW0_addr : UInt<6>
    input RW0_clk : Clock
    input RW0_wdata : UInt<22>
    output RW0_rdata : UInt<22>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<1>
  
    mem ram :
      data-type => UInt<22>
      depth => 64
      read-latency => 0
      write-latency => 1
      reader => RW_0_r_0
      writer => RW_0_w_0
      read-under-write => undefined
    RW0_rdata <= ram.RW_0_r_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = RW0_en
    node _GEN_1 = RW0_wmode
    node _GEN_2 = RW0_wmask
    node _GEN_3 = RW0_wdata
    node _GEN_4 = RW0_addr
    ram.RW_0_w_0.clk <= RW0_clk
    ram.RW_0_w_0.en <= and(RW0_en, RW0_wmode)
    ram.RW_0_w_0.mask <= RW0_wmask
    ram.RW_0_w_0.addr <= RW0_addr
    ram.RW_0_w_0.data <= RW0_wdata
    node _GEN_5 = RW0_addr
    reg ram_RW_0_addr_pipe_0 : UInt<6>, RW0_clk with :
      reset => (UInt<1>("h0"), ram_RW_0_addr_pipe_0)
    node _GEN_6 = not(RW0_wmode)
    node ram_RW_0_addr_en = and(RW0_en, _GEN_6)
    ram_RW_0_addr_pipe_0 <= mux(ram_RW_0_addr_en, RW0_addr, ram_RW_0_addr_pipe_0)
    ram.RW_0_r_0.clk <= RW0_clk
    ram.RW_0_r_0.en <= RW0_en
    ram.RW_0_r_0.addr <= ram_RW_0_addr_pipe_0

  module split_mem_ext :
    input W0_addr : UInt<12>
    input W0_clk : Clock
    input W0_data : UInt<8>
    input W0_en : UInt<1>
    input W0_mask : UInt<1>
    input R0_addr : UInt<12>
    input R0_clk : Clock
    output R0_data : UInt<8>
    input R0_en : UInt<1>
  
    mem ram :
      data-type => UInt<8>
      depth => 4096
      read-latency => 0
      write-latency => 1
      reader => R_0
      writer => W_0
      read-under-write => undefined
    R0_data <= ram.R_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = R0_en
    node _GEN_1 = R0_addr
    reg ram_R_0_addr_pipe_0 : UInt<12>, R0_clk with :
      reset => (UInt<1>("h0"), ram_R_0_addr_pipe_0)
    node ram_R_0_addr_en = R0_en
    ram_R_0_addr_pipe_0 <= mux(_GEN_0, R0_addr, ram_R_0_addr_pipe_0)
    ram.R_0.clk <= R0_clk
    ram.R_0.en <= R0_en
    ram.R_0.addr <= ram_R_0_addr_pipe_0
    node _GEN_2 = W0_en
    node _GEN_3 = W0_mask
    node _GEN_4 = W0_addr
    node _GEN_5 = W0_data
    ram.W_0.clk <= W0_clk
    ram.W_0.en <= W0_en
    ram.W_0.mask <= W0_mask
    ram.W_0.addr <= W0_addr
    ram.W_0.data <= W0_data

  module split_mem_0_ext :
    input W0_addr : UInt<10>
    input W0_clk : Clock
    input W0_data : UInt<512>
    input W0_en : UInt<1>
    input R0_addr : UInt<10>
    input R0_clk : Clock
    output R0_data : UInt<512>
    input R0_en : UInt<1>
  
    mem ram :
      data-type => UInt<512>
      depth => 1024
      read-latency => 0
      write-latency => 1
      reader => R_0
      writer => W_0
      read-under-write => undefined
    R0_data <= ram.R_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = R0_en
    node _GEN_1 = R0_addr
    reg ram_R_0_addr_pipe_0 : UInt<10>, R0_clk with :
      reset => (UInt<1>("h0"), ram_R_0_addr_pipe_0)
    node ram_R_0_addr_en = R0_en
    ram_R_0_addr_pipe_0 <= mux(_GEN_0, R0_addr, ram_R_0_addr_pipe_0)
    ram.R_0.clk <= R0_clk
    ram.R_0.en <= R0_en
    ram.R_0.addr <= ram_R_0_addr_pipe_0
    node _GEN_2 = W0_en
    node _GEN_3 = UInt<1>("h1")
    node _GEN_4 = W0_addr
    node _GEN_5 = W0_data
    ram.W_0.clk <= W0_clk
    ram.W_0.en <= W0_en
    ram.W_0.mask <= UInt<1>("h1")
    ram.W_0.addr <= W0_addr
    ram.W_0.data <= W0_data

  module split_tag_array_0_ext :
    input RW0_addr : UInt<6>
    input RW0_clk : Clock
    input RW0_wdata : UInt<21>
    output RW0_rdata : UInt<21>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<1>
  
    mem ram :
      data-type => UInt<21>
      depth => 64
      read-latency => 0
      write-latency => 1
      reader => RW_0_r_0
      writer => RW_0_w_0
      read-under-write => undefined
    RW0_rdata <= ram.RW_0_r_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = RW0_en
    node _GEN_1 = RW0_wmode
    node _GEN_2 = RW0_wmask
    node _GEN_3 = RW0_wdata
    node _GEN_4 = RW0_addr
    ram.RW_0_w_0.clk <= RW0_clk
    ram.RW_0_w_0.en <= and(RW0_en, RW0_wmode)
    ram.RW_0_w_0.mask <= RW0_wmask
    ram.RW_0_w_0.addr <= RW0_addr
    ram.RW_0_w_0.data <= RW0_wdata
    node _GEN_5 = RW0_addr
    reg ram_RW_0_addr_pipe_0 : UInt<6>, RW0_clk with :
      reset => (UInt<1>("h0"), ram_RW_0_addr_pipe_0)
    node _GEN_6 = not(RW0_wmode)
    node ram_RW_0_addr_en = and(RW0_en, _GEN_6)
    ram_RW_0_addr_pipe_0 <= mux(ram_RW_0_addr_en, RW0_addr, ram_RW_0_addr_pipe_0)
    ram.RW_0_r_0.clk <= RW0_clk
    ram.RW_0_r_0.en <= RW0_en
    ram.RW_0_r_0.addr <= ram_RW_0_addr_pipe_0

  module split_data_arrays_0_0_ext :
    input RW0_addr : UInt<8>
    input RW0_clk : Clock
    input RW0_wdata : UInt<32>
    output RW0_rdata : UInt<32>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<1>
  
    mem ram :
      data-type => UInt<32>
      depth => 256
      read-latency => 0
      write-latency => 1
      reader => RW_0_r_0
      writer => RW_0_w_0
      read-under-write => undefined
    RW0_rdata <= ram.RW_0_r_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = RW0_en
    node _GEN_1 = RW0_wmode
    node _GEN_2 = RW0_wmask
    node _GEN_3 = RW0_wdata
    node _GEN_4 = RW0_addr
    ram.RW_0_w_0.clk <= RW0_clk
    ram.RW_0_w_0.en <= and(RW0_en, RW0_wmode)
    ram.RW_0_w_0.mask <= RW0_wmask
    ram.RW_0_w_0.addr <= RW0_addr
    ram.RW_0_w_0.data <= RW0_wdata
    node _GEN_5 = RW0_addr
    reg ram_RW_0_addr_pipe_0 : UInt<8>, RW0_clk with :
      reset => (UInt<1>("h0"), ram_RW_0_addr_pipe_0)
    node _GEN_6 = not(RW0_wmode)
    node ram_RW_0_addr_en = and(RW0_en, _GEN_6)
    ram_RW_0_addr_pipe_0 <= mux(ram_RW_0_addr_en, RW0_addr, ram_RW_0_addr_pipe_0)
    ram.RW_0_r_0.clk <= RW0_clk
    ram.RW_0_r_0.en <= RW0_en
    ram.RW_0_r_0.addr <= ram_RW_0_addr_pipe_0

  module split_cc_dir_ext :
    input RW0_addr : UInt<10>
    input RW0_clk : Clock
    input RW0_wdata : UInt<16>
    output RW0_rdata : UInt<16>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
    input RW0_wmask : UInt<1>
  
    mem ram :
      data-type => UInt<16>
      depth => 1024
      read-latency => 0
      write-latency => 1
      reader => RW_0_r_0
      writer => RW_0_w_0
      read-under-write => undefined
    RW0_rdata <= ram.RW_0_r_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = RW0_en
    node _GEN_1 = RW0_wmode
    node _GEN_2 = RW0_wmask
    node _GEN_3 = RW0_wdata
    node _GEN_4 = RW0_addr
    ram.RW_0_w_0.clk <= RW0_clk
    ram.RW_0_w_0.en <= and(RW0_en, RW0_wmode)
    ram.RW_0_w_0.mask <= RW0_wmask
    ram.RW_0_w_0.addr <= RW0_addr
    ram.RW_0_w_0.data <= RW0_wdata
    node _GEN_5 = RW0_addr
    reg ram_RW_0_addr_pipe_0 : UInt<10>, RW0_clk with :
      reset => (UInt<1>("h0"), ram_RW_0_addr_pipe_0)
    node _GEN_6 = not(RW0_wmode)
    node ram_RW_0_addr_en = and(RW0_en, _GEN_6)
    ram_RW_0_addr_pipe_0 <= mux(ram_RW_0_addr_en, RW0_addr, ram_RW_0_addr_pipe_0)
    ram.RW_0_r_0.clk <= RW0_clk
    ram.RW_0_r_0.en <= RW0_en
    ram.RW_0_r_0.addr <= ram_RW_0_addr_pipe_0

  module split_cc_banks_0_ext :
    input RW0_addr : UInt<13>
    input RW0_clk : Clock
    input RW0_wdata : UInt<64>
    output RW0_rdata : UInt<64>
    input RW0_en : UInt<1>
    input RW0_wmode : UInt<1>
  
    mem ram :
      data-type => UInt<64>
      depth => 8192
      read-latency => 0
      write-latency => 1
      reader => RW_0_r_0
      writer => RW_0_w_0
      read-under-write => undefined
    RW0_rdata <= ram.RW_0_r_0.data
    skip
    skip
    skip
    skip
    skip
    skip
    node _GEN_0 = RW0_en
    node _GEN_1 = RW0_wmode
    node _GEN_2 = UInt<1>("h1")
    node _GEN_3 = RW0_wdata
    node _GEN_4 = RW0_addr
    ram.RW_0_w_0.clk <= RW0_clk
    ram.RW_0_w_0.en <= and(RW0_en, RW0_wmode)
    ram.RW_0_w_0.mask <= UInt<1>("h1")
    ram.RW_0_w_0.addr <= RW0_addr
    ram.RW_0_w_0.data <= RW0_wdata
    node _GEN_5 = RW0_addr
    reg ram_RW_0_addr_pipe_0 : UInt<13>, RW0_clk with :
      reset => (UInt<1>("h0"), ram_RW_0_addr_pipe_0)
    node _GEN_6 = not(RW0_wmode)
    node ram_RW_0_addr_en = and(RW0_en, _GEN_6)
    ram_RW_0_addr_pipe_0 <= mux(ram_RW_0_addr_en, RW0_addr, ram_RW_0_addr_pipe_0)
    ram.RW_0_r_0.clk <= RW0_clk
    ram.RW_0_r_0.en <= RW0_en
    ram.RW_0_r_0.addr <= ram_RW_0_addr_pipe_0
