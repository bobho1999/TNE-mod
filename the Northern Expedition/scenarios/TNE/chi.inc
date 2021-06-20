##############################
# Country definition for CHI #
##############################
province = { id = 1313 naval_base = 5 } # 廣州市
province = {
  id = 2714 # 新豐
  ic = { size = 0 current_size = 0 }
  infra = { size = 0.7 current_size = 0.7 }
}

#####################
# Country main data #
#####################

country = {
  tag                = CHI
  ai                 = "chi_1925.ai"
  capital            = 1313 # 廣州市
  dissent            = 5
  extra_tc           = 5
  manpower           = 40
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 20
  transports     = 80
  escorts        = 10

  diplomacy = {
    relation = { tag = CHC value = 200 }
    relation = { tag = CGX value = 200 access = yes }
    relation = { tag = U03 value = 50 }
    relation = { tag = SOV value = 100 }
    relation = { tag = JAP value = 50 }
    relation = { tag = U12 value = -100 }
    relation = { tag = U13 value = 30 }
    relation = { tag = CYN value = 100 }
  }
  SpyInfo                = { country = "CHI" NumberOfSpies = 10 }
  SpyInfo                = { country = "CHC" NumberOfSpies = 5 }
  SpyInfo                = { country = "CGX" NumberOfSpies = 5 }

  nationalprovinces      = { 1211 1212 1215 1217 1218 1219 1220 1221 1222 1223 1224 1227 1228 1229 1230 1231 1232 1233 1234 1235 1236 1238 1239 1240 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1255 1256 1257 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1270 1272 1278 1279 1280 1281 1282 1283 1312 1313 1314 1315 1316 1317 1318 1320 1321 1325 1360 1361 1363 1364 1365 1811 1875 1876 1884 1885 1886 1887 1888 1889 1890 2610 2611 2612 2613 2614 2615 2616 2617 2618 2619 2620 2621 2622 2623 2624 2625 2626 2627 2628 2629 2630 2631 2632 2635 2633 2634 2636 2637 2638 2639 2640 2641 2642 2643 2644 2645 2646 2647 2648 2649 2650 2651 2652 2653 2654 2655 2656 2657 2658 2659 2660 2661 2662 2663 2664 2665 2666 2667 2668 2669 2670 2671 2672 2673 2674 2676 2677 2678 2679 2680 2681 2682 2683 2684 2685 2686 2687 2688 2689 2690 2691 2692 2693 2694 2695 2696 2697 2698 2701 2702 2703 2704 2705 2706 2707 2708 2709 2710 2711 2712 2713 2714 2715 2716 2717 2718 2736 2737 2738 2739 2740 2741 2742 2743 2744 2745 2766 2767 2768 2769 2770 2771 2772 2773 2774 2775 2776 2777 2778 2779 2780 2699 2700 2781 2782 2783 2784 2785 2786 2787 2788 2790 2791 2793 2838 2839 2840 2841 2842 2843 2844 2845 2846 2847 2848 2849 2967 2968 2969 2970 2971 2972 2973 2974 2975 2976 2977 2992 2993 2994 1170 1202 1203 1204 1205 1206 1207 1208 1209 1210 1213 1214 1216 1225 1226 1237 1258 1271 1273 1274 1275 1276 1277 1293 1294 1305 1307 1308 1309 1310 1311 1319 1327 1362 1374 1375 1377 1378 1379 1380 1381 1382 1386 1387 1388 1389 1390 1394 1395 1396 1397 1398 1401 1402 1403 1421 1430 1431 1432 1433 1435 1439 1440 1441 1442 1443 1444 1445 1446 1447 1448 1450 1451 1452 1453 1530 1595 1623 1779 1810 2675 2719 2720 2721 2722 2723 2724 2725 2726 2727 2728 2729 2730 2731 2732 2733 2734 2735 2746 2747 2748 2749 2750 2751 2752 2753 2754 2755 2756 2757 2758 2759 2760 2761 2762 2763 2764 2765 2789 2792 2794 2795 2796 2797 2798 2799 2800 2801 2802 2803 2804 2805 2806 2807 2808 2809 2810 2811 2812 2813 2814 2815 2816 2817 2818 2819 2820 2821 2822 2823 2824 2825 2826 2827 2828 2829 2830 2831 2832 2833 2834 2835 2836 2837 2850 2851 2852 2853 2854 2855 2856 2857 2858 2859 2860 2861 2862 2863 2864 2865 2866 2867 2868 2869 2870 2871 2872 2873 2874 2875 2876 2877 2878 2879 2880 2881 2882 2883 2884 2885 2886 2887 2888 2889 2890 2891 2892 2893 2894 2895 2896 2897 2898 2899 2900 2901 2902 2903 2904 2905 2906 2907 2908 2909 2910 2911 2912 2913 2914 2915 2916 2917 2918 2919 2920 2921 2922 2923 2924 2925 2926 2927 2928 2929 2930 2931 2932 2933 2934 2935 2936 2937 2938 2939 2940 2941 2942 2943 2944 2945 2946 2947 2955 2956 2957 2958 2959 2960 2961 2962 2963 2964 2965 2966 2978 2979 2980 2981 2982 2983 2984 2985 2986 2987 2988 2989 1385 1399 1404 1419 1418 1420 1434 1436 1437 1438 2948 2949 2950 2951 2952 2953 2954 1322 1323 1324 2990 2991 2995 1993 3768 3767 2606 2607 2608 2609 1894 3000 2998 2999 2997 3464 3481 3480 3478 3471 3472 3470 3592 3590 3594 2605 3591 2996 3669 1898 3593 }
  ownedprovinces         = { 1249 1313 2714 2708 1314 1312 1317 2711 2707 3767 3590 3592 3594 }
  controlledprovinces    = { 1249 1313 2714 2708 1314 1312 1317 2711 2707 3767 3590 3592 3594 }

  techapps               = { 1010 1100 1110 1120 1130 1140 1150 3500 8000 3300 3360 3330 3320 4400 4310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 6
    freedom           = 4
    free_market       = 9
    professional_army = 4
    defense_lobby     = 9
    interventionism   = 8
  }
  chiefofnavy            = { type = 9 id = 16119 } # 陸軍管轄 
  chiefofair             = { type = 9 id = 16028 } # 國民黨
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_Three-Principles"

  landunit = {
    id       = { type = 22000 id = 100000 }
    name     = "广州城防 "
    location = 1313
    division = {
      id             = { type = 22000 id = 100001 }
      name           = "广州卫戍部队 "
      type           = infantry
      model          = 14
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 100020 }
    name     = "黄埔军校校军 "
    location = 1313
    leader   = 12014
    division = {
      id             = { type = 22000 id = 100021 }
      name           = "黄埔学生军第一教导团 "
      type           = infantry
      model          = 14
      extra          = police
      brigade_model  = 1
      strength       = 20
      max_strength   = 40
      experience     = 80
    }
    division = {
      id             = { type = 22000 id = 100022 }
      name           = "黄埔学生军第二教导团 "
      type           = infantry
      model          = 14
      extra          = police
      brigade_model  = 1
      strength       = 20
      max_strength   = 40
      experience     = 80
    }
  }
  landunit = {
    id       = { type = 22000 id = 100030 }
    name     = "建国湘军 "
    location = 1312
    leader   = 12044
    division = {
      id             = { type = 22000 id = 100031 }
      name           = "建国湘军第一师 "
      type           = infantry
      model          = 13
      strength       = 40
      max_strength   = 80
    }
    division = {
      id             = { type = 22000 id = 100032 }
      name           = "建国湘军第二师 "
      type           = militia
      model          = 3
      strength       = 100
      experience     = 25
    }
  }
  landunit = {
    id       = { type = 22000 id = 100040 }
    name     = "福军 "
    location = 1314
    leader   = 12059
    division = {
      id             = { type = 22000 id = 100041 }
      name           = "福军第一师 "
      type           = infantry
      model          = 13
      strength       = 40
      max_strength   = 60
    }
    division = {
      id             = { type = 22000 id = 100042 }
      name           = "福军第二师 "
      type           = militia
      model          = 2
      strength       = 100
      experience     = 25
    }
  }
  landunit = {
    id       = { type = 22000 id = 100050 }
    name     = "建国滇军 "
    location = 1313
    leader   = 12043
    division = {
      id             = { type = 22000 id = 100051 }
      name           = "建国滇军第一师 "
      type           = infantry
      model          = 13
      strength       = 40
      max_strength   = 60
    }
    division = {
      id             = { type = 22000 id = 100052 }
      name           = "建国滇军第二师 "
      type           = infantry
      model          = 13
      strength       = 40
      max_strength   = 60
    }
    division = {
      id             = { type = 22000 id = 100053 }
      name           = "建国滇军第三师 "
      type           = militia
      model          = 2
      strength       = 100
      experience     = 25
    }
  }

  landdivision = { dormant = yes id = { type = 22000 id = 100011 } name = "建国粤军第一师 "  type = infantry model = 13 experience = 50 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100012 } name = "粤军第二旅 "  type = infantry model = 13 experience = 50 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100061 } name = "国民革命军第一师 "  type = infantry model = 15 strength = 50  extra = artillery brigade_model = 0 experience = 50 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100062 } name = "国民革命军第二师 "  type = infantry model = 15 strength = 50  extra = artillery brigade_model = 0 experience = 50 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100063 } name = "国民革命军第三师 "  type = infantry model = 15 strength = 50 extra = artillery brigade_model = 0 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100126 } name = "国民革命军第十四师 "  type = infantry model = 15 strength = 50 max_strength = 100 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100127 } name = "国民革命军第二十师 "  type = infantry model = 15 strength = 50 max_strength = 100 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100064 } name = "国民革命军第四师 "  type = infantry model = 15 strength = 50 extra = artillery brigade_model = 0 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100065 } name = "国民革命军第五师 "  type = infantry model = 15 strength = 50 extra = artillery brigade_model = 0 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100066 } name = "国民革命军第六师 "  type = infantry model = 15 strength = 50 extra = artillery brigade_model = 0 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100067 } name = "国民革命军第七师 "  type = infantry model = 15 strength = 50 extra = artillery brigade_model = 0 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100068 } name = "国民革命军第八师 "  type = infantry model = 15 strength = 50 extra = police brigade_model = 1 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100069 } name = "国民革命军第九师 "  type = infantry model = 15 strength = 50 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100071 } name = "国民革命军第十五师 "  type = infantry model = 15 strength = 50 extra = artillery brigade_model = 0  experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100072 } name = "国民革命军第十六师 "  type = infantry model = 15 strength = 50 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100073 } name = "国民革命军第十七师 "  type = infantry model = 15 strength = 50 extra = artillery brigade_model = 0 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100074 } name = "国民革命军第十八师 "  type = infantry model = 15 strength = 50 extra = artillery brigade_model = 0 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100075 } name = "国民革命军第十九师 "  type = infantry model = 15 strength = 50 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100076 } name = "北伐军总指挥部 "  type = hq model = 2 strength = 100 experience = 100 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100078 } name = "国民革命军第十师 "  type = infantry model = 15 strength = 50 extra = artillery brigade_model = 0 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100079 } name = "国民革命军第十一师 "  type = infantry model = 15 strength = 50 extra = artillery brigade_model = 0 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100080 } name = "国民革命军第十二师 "  type = infantry model = 15 strength = 50 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100081 } name = "国民革命军第十三師 "  type = infantry model = 15 strength = 50 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100082 } name = "国民革命军第二十四師 "  type = infantry model = 15 strength = 80 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100083 } name = "国民革命军第二十六師 "  type = infantry model = 15 strength = 80 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100094 } name = "第40軍第一師 "  type = infantry model = 15 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100095 } name = "第40軍第二師"  type = infantry model = 14 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100096 } name = "第40軍第三師"  type = infantry model = 14 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100097 } name = "邹振鹏師"  type = infantry model = 15 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100098 } name = "蒋锄欧師"  type = infantry model = 14 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100099 } name = "第15軍第1師"  type = infantry model = 15 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100100 } name = "第15軍第2師"  type = infantry model = 13 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100101 } name = "第15軍第3師"  type = infantry model = 13 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100102 } name = "獨立旅"  type = militia model = 3 strength = 50 max_strength = 50 experience = 25 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100103 } name = "第14軍第1師"  type = infantry model = 15 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100104 } name = "第14軍第2師"  type = infantry model = 14 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100105 } name = "第17軍第1師"  type = infantry model = 15 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100106 } name = "第17軍第2師"  type = infantry model = 13 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100107 } name = "第17軍第3師"  type = infantry model = 13 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100108 } name = "第19軍第1師"  type = infantry model = 15 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100109 } name = "第19軍第2師"  type = infantry model = 13 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100110 } name = "第26軍第1師"  type = infantry model = 15 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100111 } name = "第26軍第2師"  type = infantry model = 13 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100112 } name = "第26軍第3師"  type = infantry model = 13 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100113 } name = "第27軍第1師"  type = infantry model = 15 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100114 } name = "第27軍第2師"  type = infantry model = 13 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100115 } name = "第27軍第3師"  type = infantry model = 13 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100116 } name = "第37軍第1師"  type = infantry model = 15 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100117 } name = "第37軍第2師"  type = infantry model = 13 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100118 } name = "第37軍第3師"  type = infantry model = 13 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100119 } name = "新三軍第1師"  type = infantry model = 15 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100120 } name = "新三軍第2師"  type = infantry model = 13 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100121 } name = "暫十一軍第1師"  type = infantry model = 15 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100122 } name = "暫十一軍第2師"  type = infantry model = 13 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100123 } name = "暫十一軍第3師"  type = infantry model = 13 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100124 } name = "暫十一軍教導第1師"  type = infantry model = 15 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100125 } name = "暫十一軍教導第2師"  type = infantry model = 13 strength = 70 } 
  landdivision = { dormant = yes id = { type = 22000 id = 100087 } name = "潮梅警備師 "  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 100088 } name = "韶屬警備師 "  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 100089 } name = "欽廉警備師 "  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 100090 } name = "肇屬警備師 "  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 100091 } name = "惠屬警備師 "  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 100092 } name = "廣屬警備師 "  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 22000 id = 100093 } name = "瓊崖警備師 "  type = infantry model = 14 strength = 70 locked = yes }
  landdivision = { dormant = yes id = { type = 22000 id = 100128 } name = "新豐警備師 "  type = infantry model = 14 strength = 70 locked = yes }
  landdivision = { dormant = yes id = { type = 22000 id = 100129 } name = "陸軍第37師 "  type = infantry model = 14 strength = 70 locked = yes }
  landdivision = { dormant = yes id = { type = 22000 id = 100130 } name = "陸軍第38師 "  type = infantry model = 14 strength = 70 locked = yes }
}
