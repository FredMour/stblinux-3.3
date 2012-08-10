/***************************************************************************
 *     Copyright (c) 1999-2012, Broadcom Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jun 29 03:07:30 2012
 *                 MD5 Checksum         d41d8cd98f00b204e9800998ecf8427e
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008005
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: $
 *
 ***************************************************************************/

#ifndef BCHP_MEMC_DDR_2_H__
#define BCHP_MEMC_DDR_2_H__

/***************************************************************************
 *MEMC_DDR_2 - Sequencer DRAM Param and Control Registers 2
 ***************************************************************************/
#define BCHP_MEMC_DDR_2_CNTRLR_CONFIG            0x003d2000 /* Memory Controller Configuration Register */
#define BCHP_MEMC_DDR_2_DRAM_INIT_CNTRL          0x003d2004 /* Dram initialization control */
#define BCHP_MEMC_DDR_2_DRAM_INIT_STATUS         0x003d2008 /* Dram initialization status */
#define BCHP_MEMC_DDR_2_DRAM_MODE_0              0x003d200c /* Dram Mode Register 0 */
#define BCHP_MEMC_DDR_2_DRAM_MODE_1              0x003d2010 /* Dram Mode Register 1 */
#define BCHP_MEMC_DDR_2_DRAM_MODE_2              0x003d2014 /* Dram Mode Register 2 */
#define BCHP_MEMC_DDR_2_DRAM_MODE_3              0x003d2018 /* Dram Mode Register 3 */
#define BCHP_MEMC_DDR_2_DRAM_MODE_4              0x003d24ec /* Dram Mode Register 4 */
#define BCHP_MEMC_DDR_2_DRAM_MODE_5              0x003d24f0 /* Dram Mode Register 5 */
#define BCHP_MEMC_DDR_2_DRAM_MODE_6              0x003d24f4 /* Dram Mode Register 6 */
#define BCHP_MEMC_DDR_2_DRAM_MODE_7              0x003d24f8 /* Dram Mode Register 7 */
#define BCHP_MEMC_DDR_2_DRAM_MODE_15             0x003d24fc /* Dram Mode Register 15 */
#define BCHP_MEMC_DDR_2_PPD_CONFIG               0x003d201c /* Precharge power down mode configuration register */
#define BCHP_MEMC_DDR_2_SRPD_CONFIG              0x003d2020 /* Self-refresh power down mode configuration register */
#define BCHP_MEMC_DDR_2_SSPD_CMD                 0x003d2024 /* Software standby power down mode */
#define BCHP_MEMC_DDR_2_POWER_DOWN_STATUS        0x003d2028 /* Power down status */
#define BCHP_MEMC_DDR_2_WARM_BOOT                0x003d202c /* Warm boot control registers */
#define BCHP_MEMC_DDR_2_DRAM_TIMING_0            0x003d2030 /* DDR-SDRAM Timing Register 0 */
#define BCHP_MEMC_DDR_2_DRAM_TIMING_1            0x003d2034 /* DDR-SDRAM Timing Register 1 */
#define BCHP_MEMC_DDR_2_DRAM_TIMING_2            0x003d2038 /* Read to Write & write to read timing register */
#define BCHP_MEMC_DDR_2_DRAM_TIMING_3            0x003d203c /* DDR-SDRAM Timing Register 3 */
#define BCHP_MEMC_DDR_2_DRAM_TIMING_4            0x003d2040 /* DDR-SDRAM Timing Register 4 */
#define BCHP_MEMC_DDR_2_DRAM_TIMING_5            0x003d2044 /* DDR-SDRAM Timing Register 5 */
#define BCHP_MEMC_DDR_2_CNTRLR_START_SEQ         0x003d2048 /* Memory Controller Sequencer Enable */
#define BCHP_MEMC_DDR_2_CNTRLR_SM_TIMEOUT        0x003d204c /* Memory Controller , state machine timeout register. */
#define BCHP_MEMC_DDR_2_BANK_STATUS              0x003d2050 /* Memory Controller, Bank Status Register */
#define BCHP_MEMC_DDR_2_TESTER_LATENCY           0x003d2054 /* Memory Controller, Tester Latency Register. */
#define BCHP_MEMC_DDR_2_DTPM_BYTE0               0x003d2058 /* Memory Controller, DATA_PINMAP_BYTE0_SEL Register. */
#define BCHP_MEMC_DDR_2_DTPM_BYTE1               0x003d205c /* Memory Controller, DATA_PINMAP_BYTE1_SEL Register. */
#define BCHP_MEMC_DDR_2_DTPM_BYTE2               0x003d2060 /* Memory Controller, DATA_PINMAP_BYTE2_SEL Register. */
#define BCHP_MEMC_DDR_2_DTPM_BYTE3               0x003d2064 /* Memory Controller, DATA_PINMAP_BYTE3_SEL Register. */
#define BCHP_MEMC_DDR_2_DRAM_DDR3_RESET_PERIOD   0x003d2068 /* Memory Controller, DDR3 DRAM reset Register. */
#define BCHP_MEMC_DDR_2_STAT_CONTROL             0x003d206c /* Statistics Control register */
#define BCHP_MEMC_DDR_2_STAT_TIMER               0x003d2070 /* Statistics Timer */
#define BCHP_MEMC_DDR_2_STAT_IDLE_NOP            0x003d2074 /* DRAM Idle_NOP Cycle Count Register. */
#define BCHP_MEMC_DDR_2_STAT_MAX_IDLE_NOP        0x003d2078 /* Maximum DRAM idle_NOP cycle count register. */
#define BCHP_MEMC_DDR_2_STAT_CAS_ALL             0x003d207c /* CAS Count Register. */
#define BCHP_MEMC_DDR_2_STAT_MAX_CAS_ALL         0x003d2080 /* Maximum DRAM CAS cycle count register. */
#define BCHP_MEMC_DDR_2_STAT_PENALTY_ALL         0x003d2084 /* DRAM Penalty Cycle Count register. */
#define BCHP_MEMC_DDR_2_STAT_MAX_TRANS_CYCLES_ALL 0x003d2088 /* Maximum number of transactions cycles (CAS+Penalty_ALL). */
#define BCHP_MEMC_DDR_2_STAT_TRANS_READ_ALL      0x003d208c /* Number of overall system memory read transactions. */
#define BCHP_MEMC_DDR_2_STAT_TRANS_WRITE_ALL     0x003d2090 /* Number of overall system memory write transactions. */
#define BCHP_MEMC_DDR_2_STAT_MAX_TRANS_ALL       0x003d2094 /* Maximum Number of Overall System memory transactions. */
#define BCHP_MEMC_DDR_2_STAT_MIN_TRANS_ALL       0x003d2098 /* Minimum Number of Overall System memory transactions. */
#define BCHP_MEMC_DDR_2_STAT_CLIENT_SERVICE_CAS  0x003d209c /* Service CAS Cycle Count register. */
#define BCHP_MEMC_DDR_2_STAT_MAX_CLIENT_SERVICE_CAS 0x003d20a0 /* Maximum service CAS cycle count register. */
#define BCHP_MEMC_DDR_2_STAT_MIN_CLIENT_SERVICE_CAS 0x003d20a4 /* Minimum service CAS cycle count register. */
#define BCHP_MEMC_DDR_2_STAT_CLIENT_SERVICE_INTR_PENALTY 0x003d20a8 /* Service Intra DRAM Penalty Cycle Count register. */
#define BCHP_MEMC_DDR_2_STAT_CLIENT_SERVICE_POST_PENALTY 0x003d20ac /* Service Post DRAM Penalty Cycle Count register. */
#define BCHP_MEMC_DDR_2_STAT_MAX_CLIENT_SERVICE_CYCLES 0x003d20b0 /* Maximum service cycle count register. */
#define BCHP_MEMC_DDR_2_STAT_MIN_CLIENT_SERVICE_CYCLES 0x003d20b4 /* Minimum service cycle count register. */
#define BCHP_MEMC_DDR_2_STAT_CLIENT_SERVICE_TRANS_READ 0x003d20b8 /* Service Read Transaction Count register. */
#define BCHP_MEMC_DDR_2_STAT_CLIENT_SERVICE_TRANS_WRITE 0x003d20bc /* Service Write Transaction Count register. */
#define BCHP_MEMC_DDR_2_STAT_MAX_CLIENT_SERVICE_TRANS 0x003d20c0 /* Maximum service Transaction count register. */
#define BCHP_MEMC_DDR_2_STAT_MIN_CLIENT_SERVICE_TRANS 0x003d20c4 /* Minimum service cycle Transaction register. */
#define BCHP_MEMC_DDR_2_STAT_CLIENT_SERVICE_LATENCY 0x003d20c8 /* Service Latency Count register. */
#define BCHP_MEMC_DDR_2_STAT_MAX_CLIENT_SERVICE_LATENCY 0x003d20cc /* Maximum Service Latency count register. */
#define BCHP_MEMC_DDR_2_STAT_MIN_CLIENT_SERVICE_LATENCY 0x003d20d0 /* Minimum Service Latency count register. */
#define BCHP_MEMC_DDR_2_STAT_CLIENT_ABS_MAX_SERVICE_LATENCY 0x003d20d4 /* Absolute Minimum Service Latency count register. */
#define BCHP_MEMC_DDR_2_STAT_CLIENT_ABS_MIN_SERVICE_LATENCY 0x003d20d8 /* Absolute Maximum Service Latency count register. */
#define BCHP_MEMC_DDR_2_STAT_REFRESH             0x003d20dc /* Total number of refreshes issuedr. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_0        0x003d20e0 /* CAS cycle count register for client 0. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_1        0x003d20e4 /* CAS cycle count register for client 1. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_2        0x003d20e8 /* CAS cycle count register for client 2. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_3        0x003d20ec /* CAS cycle count register for client 3. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_4        0x003d20f0 /* CAS cycle count register for client 4. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_5        0x003d20f4 /* CAS cycle count register for client 5. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_6        0x003d20f8 /* CAS cycle count register for client 6. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_7        0x003d20fc /* CAS cycle count register for client 7. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_8        0x003d2100 /* CAS cycle count register for client 8. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_9        0x003d2104 /* CAS cycle count register for client 9. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_10       0x003d2108 /* CAS cycle count register for client 10. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_11       0x003d210c /* CAS cycle count register for client 11. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_12       0x003d2110 /* CAS cycle count register for client 12. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_13       0x003d2114 /* CAS cycle count register for client 13. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_14       0x003d2118 /* CAS cycle count register for client 14. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_15       0x003d211c /* CAS cycle count register for client 15. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_16       0x003d2120 /* CAS cycle count register for client 16. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_17       0x003d2124 /* CAS cycle count register for client 17. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_18       0x003d2128 /* CAS cycle count register for client 18. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_19       0x003d212c /* CAS cycle count register for client 19. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_20       0x003d2130 /* CAS cycle count register for client 20. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_21       0x003d2134 /* CAS cycle count register for client 21. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_22       0x003d2138 /* CAS cycle count register for client 22. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_23       0x003d213c /* CAS cycle count register for client 23. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_24       0x003d2140 /* CAS cycle count register for client 24. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_25       0x003d2144 /* CAS cycle count register for client 25. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_26       0x003d2148 /* CAS cycle count register for client 26. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_27       0x003d214c /* CAS cycle count register for client 27. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_28       0x003d2150 /* CAS cycle count register for client 28. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_29       0x003d2154 /* CAS cycle count register for client 29. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_30       0x003d2158 /* CAS cycle count register for client 30. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_31       0x003d215c /* CAS cycle count register for client 31. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_32       0x003d2160 /* CAS cycle count register for client 32. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_33       0x003d2164 /* CAS cycle count register for client 33. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_34       0x003d2168 /* CAS cycle count register for client 34. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_35       0x003d216c /* CAS cycle count register for client 35. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_36       0x003d2170 /* CAS cycle count register for client 36. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_37       0x003d2174 /* CAS cycle count register for client 37. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_38       0x003d2178 /* CAS cycle count register for client 38. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_39       0x003d217c /* CAS cycle count register for client 39. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_40       0x003d2180 /* CAS cycle count register for client 40. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_41       0x003d2184 /* CAS cycle count register for client 41. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_42       0x003d2188 /* CAS cycle count register for client 42. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_43       0x003d218c /* CAS cycle count register for client 43. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_44       0x003d2190 /* CAS cycle count register for client 44. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_45       0x003d2194 /* CAS cycle count register for client 45. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_46       0x003d2198 /* CAS cycle count register for client 46. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_47       0x003d219c /* CAS cycle count register for client 47. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_48       0x003d21a0 /* CAS cycle count register for client 48. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_49       0x003d21a4 /* CAS cycle count register for client 49. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_50       0x003d21a8 /* CAS cycle count register for client 50. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_51       0x003d21ac /* CAS cycle count register for client 51. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_52       0x003d21b0 /* CAS cycle count register for client 52. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_53       0x003d21b4 /* CAS cycle count register for client 53. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_54       0x003d21b8 /* CAS cycle count register for client 54. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_55       0x003d21bc /* CAS cycle count register for client 55. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_56       0x003d21c0 /* CAS cycle count register for client 56. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_57       0x003d21c4 /* CAS cycle count register for client 57. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_58       0x003d21c8 /* CAS cycle count register for client 58. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_59       0x003d21cc /* CAS cycle count register for client 59. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_60       0x003d21d0 /* CAS cycle count register for client 60. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_61       0x003d21d4 /* CAS cycle count register for client 61. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_62       0x003d21d8 /* CAS cycle count register for client 62. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_63       0x003d21dc /* CAS cycle count register for client 63. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_64       0x003d21e0 /* CAS cycle count register for client 64. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_65       0x003d21e4 /* CAS cycle count register for client 65. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_66       0x003d21e8 /* CAS cycle count register for client 66. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_67       0x003d21ec /* CAS cycle count register for client 67. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_68       0x003d21f0 /* CAS cycle count register for client 68. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_69       0x003d21f4 /* CAS cycle count register for client 69. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_70       0x003d21f8 /* CAS cycle count register for client 70. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_71       0x003d21fc /* CAS cycle count register for client 71. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_72       0x003d2200 /* CAS cycle count register for client 72. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_73       0x003d2204 /* CAS cycle count register for client 73. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_74       0x003d2208 /* CAS cycle count register for client 74. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_75       0x003d220c /* CAS cycle count register for client 75. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_76       0x003d2210 /* CAS cycle count register for client 76. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_77       0x003d2214 /* CAS cycle count register for client 77. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_78       0x003d2218 /* CAS cycle count register for client 78. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_79       0x003d221c /* CAS cycle count register for client 79. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_80       0x003d2220 /* CAS cycle count register for client 80. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_81       0x003d2224 /* CAS cycle count register for client 81. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_82       0x003d2228 /* CAS cycle count register for client 82. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_83       0x003d222c /* CAS cycle count register for client 83. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_84       0x003d2230 /* CAS cycle count register for client 84. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_85       0x003d2234 /* CAS cycle count register for client 85. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_86       0x003d2238 /* CAS cycle count register for client 86. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_87       0x003d223c /* CAS cycle count register for client 87. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_88       0x003d2240 /* CAS cycle count register for client 88. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_89       0x003d2244 /* CAS cycle count register for client 89. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_90       0x003d2248 /* CAS cycle count register for client 90. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_91       0x003d224c /* CAS cycle count register for client 91. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_92       0x003d2250 /* CAS cycle count register for client 92. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_93       0x003d2254 /* CAS cycle count register for client 93. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_94       0x003d2258 /* CAS cycle count register for client 94. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_95       0x003d225c /* CAS cycle count register for client 95. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_96       0x003d2260 /* CAS cycle count register for client 96. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_97       0x003d2264 /* CAS cycle count register for client 97. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_98       0x003d2268 /* CAS cycle count register for client 98. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_99       0x003d226c /* CAS cycle count register for client 99. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_100      0x003d2270 /* CAS cycle count register for client 100. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_101      0x003d2274 /* CAS cycle count register for client 101. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_102      0x003d2278 /* CAS cycle count register for client 102. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_103      0x003d227c /* CAS cycle count register for client 103. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_104      0x003d2280 /* CAS cycle count register for client 104. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_105      0x003d2284 /* CAS cycle count register for client 105. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_106      0x003d2288 /* CAS cycle count register for client 106. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_107      0x003d228c /* CAS cycle count register for client 107. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_108      0x003d2290 /* CAS cycle count register for client 108. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_109      0x003d2294 /* CAS cycle count register for client 109. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_110      0x003d2298 /* CAS cycle count register for client 110. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_111      0x003d229c /* CAS cycle count register for client 111. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_112      0x003d22a0 /* CAS cycle count register for client 112. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_113      0x003d22a4 /* CAS cycle count register for client 113. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_114      0x003d22a8 /* CAS cycle count register for client 114. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_115      0x003d22ac /* CAS cycle count register for client 115. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_116      0x003d22b0 /* CAS cycle count register for client 116. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_117      0x003d22b4 /* CAS cycle count register for client 117. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_118      0x003d22b8 /* CAS cycle count register for client 118. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_119      0x003d22bc /* CAS cycle count register for client 119. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_120      0x003d22c0 /* CAS cycle count register for client 120. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_121      0x003d22c4 /* CAS cycle count register for client 121. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_122      0x003d22c8 /* CAS cycle count register for client 122. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_123      0x003d22cc /* CAS cycle count register for client 123. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_124      0x003d22d0 /* CAS cycle count register for client 124. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_125      0x003d22d4 /* CAS cycle count register for client 125. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_126      0x003d22d8 /* CAS cycle count register for client 126. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_127      0x003d22dc /* CAS cycle count register for client 127. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_128      0x003d22e0 /* CAS cycle count register for client 128. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_129      0x003d22e4 /* CAS cycle count register for client 129. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_130      0x003d22e8 /* CAS cycle count register for client 130. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_131      0x003d22ec /* CAS cycle count register for client 131. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_132      0x003d22f0 /* CAS cycle count register for client 132. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_133      0x003d22f4 /* CAS cycle count register for client 133. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_134      0x003d22f8 /* CAS cycle count register for client 134. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_135      0x003d22fc /* CAS cycle count register for client 135. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_136      0x003d2300 /* CAS cycle count register for client 136. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_137      0x003d2304 /* CAS cycle count register for client 137. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_138      0x003d2308 /* CAS cycle count register for client 138. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_139      0x003d230c /* CAS cycle count register for client 139. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_140      0x003d2310 /* CAS cycle count register for client 140. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_141      0x003d2314 /* CAS cycle count register for client 141. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_142      0x003d2318 /* CAS cycle count register for client 142. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_143      0x003d231c /* CAS cycle count register for client 143. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_144      0x003d2320 /* CAS cycle count register for client 144. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_145      0x003d2324 /* CAS cycle count register for client 145. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_146      0x003d2328 /* CAS cycle count register for client 146. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_147      0x003d232c /* CAS cycle count register for client 147. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_148      0x003d2330 /* CAS cycle count register for client 148. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_149      0x003d2334 /* CAS cycle count register for client 149. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_150      0x003d2338 /* CAS cycle count register for client 150. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_151      0x003d233c /* CAS cycle count register for client 151. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_152      0x003d2340 /* CAS cycle count register for client 152. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_153      0x003d2344 /* CAS cycle count register for client 153. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_154      0x003d2348 /* CAS cycle count register for client 154. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_155      0x003d234c /* CAS cycle count register for client 155. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_156      0x003d2350 /* CAS cycle count register for client 156. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_157      0x003d2354 /* CAS cycle count register for client 157. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_158      0x003d2358 /* CAS cycle count register for client 158. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_159      0x003d235c /* CAS cycle count register for client 159. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_160      0x003d2360 /* CAS cycle count register for client 160. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_161      0x003d2364 /* CAS cycle count register for client 161. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_162      0x003d2368 /* CAS cycle count register for client 162. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_163      0x003d236c /* CAS cycle count register for client 163. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_164      0x003d2370 /* CAS cycle count register for client 164. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_165      0x003d2374 /* CAS cycle count register for client 165. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_166      0x003d2378 /* CAS cycle count register for client 166. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_167      0x003d237c /* CAS cycle count register for client 167. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_168      0x003d2380 /* CAS cycle count register for client 168. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_169      0x003d2384 /* CAS cycle count register for client 169. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_170      0x003d2388 /* CAS cycle count register for client 170. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_171      0x003d238c /* CAS cycle count register for client 171. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_172      0x003d2390 /* CAS cycle count register for client 172. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_173      0x003d2394 /* CAS cycle count register for client 173. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_174      0x003d2398 /* CAS cycle count register for client 174. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_175      0x003d239c /* CAS cycle count register for client 175. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_176      0x003d23a0 /* CAS cycle count register for client 176. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_177      0x003d23a4 /* CAS cycle count register for client 177. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_178      0x003d23a8 /* CAS cycle count register for client 178. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_179      0x003d23ac /* CAS cycle count register for client 179. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_180      0x003d23b0 /* CAS cycle count register for client 180. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_181      0x003d23b4 /* CAS cycle count register for client 181. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_182      0x003d23b8 /* CAS cycle count register for client 182. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_183      0x003d23bc /* CAS cycle count register for client 183. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_184      0x003d23c0 /* CAS cycle count register for client 184. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_185      0x003d23c4 /* CAS cycle count register for client 185. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_186      0x003d23c8 /* CAS cycle count register for client 186. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_187      0x003d23cc /* CAS cycle count register for client 187. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_188      0x003d23d0 /* CAS cycle count register for client 188. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_189      0x003d23d4 /* CAS cycle count register for client 189. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_190      0x003d23d8 /* CAS cycle count register for client 190. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_191      0x003d23dc /* CAS cycle count register for client 191. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_192      0x003d23e0 /* CAS cycle count register for client 192. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_193      0x003d23e4 /* CAS cycle count register for client 193. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_194      0x003d23e8 /* CAS cycle count register for client 194. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_195      0x003d23ec /* CAS cycle count register for client 195. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_196      0x003d23f0 /* CAS cycle count register for client 196. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_197      0x003d23f4 /* CAS cycle count register for client 197. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_198      0x003d23f8 /* CAS cycle count register for client 198. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_199      0x003d23fc /* CAS cycle count register for client 199. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_200      0x003d2400 /* CAS cycle count register for client 200. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_201      0x003d2404 /* CAS cycle count register for client 201. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_202      0x003d2408 /* CAS cycle count register for client 202. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_203      0x003d240c /* CAS cycle count register for client 203. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_204      0x003d2410 /* CAS cycle count register for client 204. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_205      0x003d2414 /* CAS cycle count register for client 205. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_206      0x003d2418 /* CAS cycle count register for client 206. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_207      0x003d241c /* CAS cycle count register for client 207. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_208      0x003d2420 /* CAS cycle count register for client 208. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_209      0x003d2424 /* CAS cycle count register for client 209. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_210      0x003d2428 /* CAS cycle count register for client 210. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_211      0x003d242c /* CAS cycle count register for client 211. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_212      0x003d2430 /* CAS cycle count register for client 212. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_213      0x003d2434 /* CAS cycle count register for client 213. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_214      0x003d2438 /* CAS cycle count register for client 214. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_215      0x003d243c /* CAS cycle count register for client 215. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_216      0x003d2440 /* CAS cycle count register for client 216. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_217      0x003d2444 /* CAS cycle count register for client 217. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_218      0x003d2448 /* CAS cycle count register for client 218. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_219      0x003d244c /* CAS cycle count register for client 219. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_220      0x003d2450 /* CAS cycle count register for client 220. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_221      0x003d2454 /* CAS cycle count register for client 221. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_222      0x003d2458 /* CAS cycle count register for client 222. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_223      0x003d245c /* CAS cycle count register for client 223. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_224      0x003d2460 /* CAS cycle count register for client 224. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_225      0x003d2464 /* CAS cycle count register for client 225. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_226      0x003d2468 /* CAS cycle count register for client 226. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_227      0x003d246c /* CAS cycle count register for client 227. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_228      0x003d2470 /* CAS cycle count register for client 228. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_229      0x003d2474 /* CAS cycle count register for client 229. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_230      0x003d2478 /* CAS cycle count register for client 230. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_231      0x003d247c /* CAS cycle count register for client 231. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_232      0x003d2480 /* CAS cycle count register for client 232. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_233      0x003d2484 /* CAS cycle count register for client 233. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_234      0x003d2488 /* CAS cycle count register for client 234. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_235      0x003d248c /* CAS cycle count register for client 235. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_236      0x003d2490 /* CAS cycle count register for client 236. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_237      0x003d2494 /* CAS cycle count register for client 237. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_238      0x003d2498 /* CAS cycle count register for client 238. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_239      0x003d249c /* CAS cycle count register for client 239. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_240      0x003d24a0 /* CAS cycle count register for client 240. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_241      0x003d24a4 /* CAS cycle count register for client 241. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_242      0x003d24a8 /* CAS cycle count register for client 242. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_243      0x003d24ac /* CAS cycle count register for client 243. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_244      0x003d24b0 /* CAS cycle count register for client 244. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_245      0x003d24b4 /* CAS cycle count register for client 245. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_246      0x003d24b8 /* CAS cycle count register for client 246. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_247      0x003d24bc /* CAS cycle count register for client 247. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_248      0x003d24c0 /* CAS cycle count register for client 248. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_249      0x003d24c4 /* CAS cycle count register for client 249. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_250      0x003d24c8 /* CAS cycle count register for client 250. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_251      0x003d24cc /* CAS cycle count register for client 251. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_252      0x003d24d0 /* CAS cycle count register for client 252. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_253      0x003d24d4 /* CAS cycle count register for client 253. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_254      0x003d24d8 /* CAS cycle count register for client 254. */
#define BCHP_MEMC_DDR_2_STAT_CAS_CLIENT_255      0x003d24dc /* CAS cycle count register for client 255. */
#define BCHP_MEMC_DDR_2_STAT_MIN_CAS_ALL         0x003d24e0 /* Minimum DRAM CAS cycle count register. */
#define BCHP_MEMC_DDR_2_STAT_MIN_TRANS_CYCLES_ALL 0x003d24e4 /* Minimum number of transactions cycles (CAS+Penalty_ALL). */
#define BCHP_MEMC_DDR_2_DYN_VDL_CMD_DLY          0x003d24e8 /* Dynamic VDL shmoo command delay. */
#define BCHP_MEMC_DDR_2_SEQ_RING_BUF_DEPTH       0x003d2500 /* Sequencer Ring Buffer programmable depth. */
#define BCHP_MEMC_DDR_2_SEQ_WRDATA_ERR_INFO      0x003d2504 /* Sequencer write data error info */
#define BCHP_MEMC_DDR_2_SEQ_WRDATA_TRANSID_MISMATCH_INFO 0x003d2508 /* Sequencer transaction ID mismatch error info */
#define BCHP_MEMC_DDR_2_SEQ_CLEAR_VIOLATIONS     0x003d250c /* Sequencer Violation Info register clear. */

#endif /* #ifndef BCHP_MEMC_DDR_2_H__ */

/* End of File */
