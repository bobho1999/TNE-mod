##############################
# Country definition for U03 #
##############################
province = { id = 1228 supplypool = 2000 } # 郑州 

province = {
  id = 2791 # 
  ic = { size = 0 current_size = 0 }
}
province = {
  id = 2792 # 
  ic = { size = 0 current_size = 0 }
}
province = {
  id = 2794 # 
  ic = { size = 0 current_size = 0 }
}
#province = {
#  id = 1271 # 
#  ic = { size = 0 current_size = 0 }
#}

#####################
# Country main data #
#####################

country = {
  tag                = U03
  regular_id         = CHI
  regular_id         = UCH
  ai                 = "u03_1925.ai"
  intrinsic_gov_type = paternal_autocrat
  capital            = 1206 # 張家口
  dissent            = 20
  manpower           = 100
  peacetime_ic_mod       = 0.8
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 100
  transports     = 10
  escorts        = 2

  nationalprovinces      = { 1211 1212 1215 1217 1218 1219 1220 1221 1222 1223 1224 1227 1228 1229 1230 1231 1232 1233 1234 1235 1236 1238 1239 1240 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1255 1256 1257 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1270 1272 1278 1279 1280 1281 1282 1283 1312 1313 1314 1315 1316 1317 1318 1320 1321 1325 1360 1361 1363 1364 1365 1811 1875 1876 1884 1885 1886 1887 1888 1889 1890 2610 2611 2612 2613 2614 2615 2616 2617 2618 2619 2620 2621 2622 2623 2624 2625 2626 2627 2628 2629 2630 2631 2632 2635 2633 2634 2636 2637 2638 2639 2640 2641 2642 2643 2644 2645 2646 2647 2648 2649 2650 2651 2652 2653 2654 2655 2656 2657 2658 2659 2660 2661 2662 2663 2664 2665 2666 2667 2668 2669 2670 2671 2672 2673 2674 2676 2677 2678 2679 2680 2681 2682 2683 2684 2685 2686 2687 2688 2689 2690 2691 2692 2693 2694 2695 2696 2697 2698 2701 2702 2703 2704 2705 2706 2707 2708 2709 2710 2711 2712 2713 2714 2715 2716 2717 2718 2736 2737 2738 2739 2740 2741 2742 2743 2744 2745 2766 2767 2768 2769 2770 2771 2772 2773 2774 2775 2776 2777 2778 2779 2780 2699 2700 2781 2782 2783 2784 2785 2786 2787 2788 2790 2791 2793 2838 2839 2840 2841 2842 2843 2844 2845 2846 2847 2848 2849 2967 2968 2969 2970 2971 2972 2973 2974 2975 2976 2977 2992 2993 2994 1170 1202 1203 1204 1205 1206 1207 1208 1209 1210 1213 1214 1216 1225 1226 1237 1258 1271 1273 1274 1275 1276 1277 1293 1294 1305 1307 1308 1309 1310 1311 1319 1327 1362 1374 1375 1377 1378 1379 1380 1381 1382 1386 1387 1388 1389 1390 1394 1395 1396 1397 1398 1401 1402 1403 1421 1430 1431 1432 1433 1435 1439 1440 1441 1442 1443 1444 1445 1446 1447 1448 1450 1451 1452 1453 1530 1595 1623 1779 1810 2675 2719 2720 2721 2722 2723 2724 2725 2726 2727 2728 2729 2730 2731 2732 2733 2734 2735 2746 2747 2748 2749 2750 2751 2752 2753 2754 2755 2756 2757 2758 2759 2760 2761 2762 2763 2764 2765 2789 2792 2794 2795 2796 2797 2798 2799 2800 2801 2802 2803 2804 2805 2806 2807 2808 2809 2810 2811 2812 2813 2814 2815 2816 2817 2818 2819 2820 2821 2822 2823 2824 2825 2826 2827 2828 2829 2830 2831 2832 2833 2834 2835 2836 2837 2850 2851 2852 2853 2854 2855 2856 2857 2858 2859 2860 2861 2862 2863 2864 2865 2866 2867 2868 2869 2870 2871 2872 2873 2874 2875 2876 2877 2878 2879 2880 2881 2882 2883 2884 2885 2886 2887 2888 2889 2890 2891 2892 2893 2894 2895 2896 2897 2898 2899 2900 2901 2902 2903 2904 2905 2906 2907 2908 2909 2910 2911 2912 2913 2914 2915 2916 2917 2918 2919 2920 2921 2922 2923 2924 2925 2926 2927 2928 2929 2930 2931 2932 2933 2934 2935 2936 2937 2938 2939 2940 2941 2942 2943 2944 2945 2946 2947 2955 2956 2957 2958 2959 2960 2961 2962 2963 2964 2965 2966 2978 2979 2980 2981 2982 2983 2984 2985 2986 2987 2988 2989 1385 1399 1404 1419 1418 1420 1434 1436 1437 1438 2948 2949 2950 2951 2952 2953 2954 1322 1323 1324 2990 2991 2995 1993 3768 3767 2606 2607 2608 2609 1894 3000 2998 2999 2997 3464 3481 3480 3478 3471 3472 3470 1898 2996 3669 2605 }
  ownedprovinces         = { 1206 1207 1208 1267 1268 1269 1270 1271 1272 1278 1386 1398 1439 1595 1887 2781 2782 2783 2784 2785 2786 2787 2788 2789 2790 2791 2792 2794 2812 2813 2814 2815 2816 2817 2881 2939 2941 2942 2943 2944 2947 2838 2839 1223 1224 1228 2849 2848 2847 2846 1230 1876
1213 1170 2852 2851 2864 1216 2853 2850 2863 2855 2856 2854 2857 2858 2859 2862 1215 2860 1214 2861 1894
2840 2841 2842 2843 2844 1229 2845 1227 }
  controlledprovinces    = { 1206 1207 1208 1267 1268 1269 1270 1271 1272 1278 1386 1398 1439 1595 1887 2781 2782 2783 2784 2785 2786 2787 2788 2789 2790 2791 2792 2794 2812 2813 2814 2815 2816 2817 2881 2939 2941 2942 2943 2944 2947 2838 2839 1223 1224 1228 2849 2848 2847 2846 1230 1876
1213 1170 2852 2851 2864 1216 2853 2850 2863 2855 2856 2854 2857 2858 2859 2862 1215 2860 1214 2861 1894
2840 2841 2842 2843 2844 1229 2845 1227 }

  techapps               = { 4310 1010 1020 1030 1040 1050 1060 1070 1080 3510 8010 8040 8070 8080 8000 3300 3310 3350 1190 1200 1210 1220 1230 4400 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 4
    professional_army = 3
    defense_lobby     = 10
    interventionism   = 4
  }
  chiefofnavy            = { type = 9 id = 16119 } # 陸軍管轄 
  chiefofair             = { type = 9 id = 16008 } # 北洋军閥
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 22330 id = 1 }
    name     = "西北边防督办"
    location = 1206
    division = {
      id             = { type = 22330 id = 2 }
      name           = "西北边防督办"
      type           = hq
      model          = 1
    }
  }
  landunit = {
    id       = { type = 22330 id = 3 }
    name     = "國民军第一军 "
    location = 1206
    leader   = 56000
    division = {
      id             = { type = 22330 id = 4 }
      name           = "第一师 "
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 22330 id = 5 }
      name           = "第二师 "
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 22330 id = 6 }
      name           = "第三师 "
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 22330 id = 15 }
      name           = "第四师 "
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 22330 id = 16 }
      name           = "第五师 "
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 22330 id = 17 }
      name           = "第六师 "
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 22330 id = 18 }
      name           = "第八师 "
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 22330 id = 19 }
      name           = "第九师 "
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 22330 id = 20 }
      name           = "第十师 "
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 22330 id = 21 }
      name           = "第十一师 "
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 22330 id = 22 }
      name           = "第十二师 "
      type           = infantry
      model          = 7
      strength       = 100
    }
    division = {
      id             = { type = 22330 id = 23 }
      name           = "騎兵第一师 "
      type           = cavalry
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 22330 id = 24 }
      name           = "騎兵第二师 "
      type           = cavalry
      model          = 4
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22330 id = 7 }
    name     = "国民军第二军 "
    location = 1228
    leader   = 56047
    division = {
      id             = { type = 22330 id = 42 }
      name           = "國民二軍第一師"
      type           = infantry
      model          = 7
    }
    division = {
      id             = { type = 22330 id = 46 }
      name           = "國民二軍第二師"
      type           = infantry
      model          = 7
    }
    division = {
      id             = { type = 22330 id = 47 }
      name           = "國民二軍第三師"
      type           = infantry
      model          = 7
    }
    division = {
      id             = { type = 22330 id = 48 }
      name           = "國民二軍第四師"
      type           = infantry
      model          = 7
    }
    division = {
      id             = { type = 22330 id = 49 }
      name           = "國民二軍第五師"
      type           = infantry
      model          = 7
    }
    division = {
      id             = { type = 22330 id = 50 }
      name           = "國民二軍第六師"
      type           = infantry
      model          = 7
    }
    division = {
      id             = { type = 22330 id = 51 }
      name           = "國民二軍第七師"
      type           = infantry
      model          = 6
    }
    division = {
      id             = { type = 22330 id = 52 }
      name           = "國民二軍第八師"
      type           = infantry
      model          = 6
    }
    division = {
      id             = { type = 22330 id = 53 }
      name           = "國民二軍第九師"
      type           = infantry
      model          = 6
    }
    division = {
      id             = { type = 22330 id = 54 }
      name           = "國民二軍第十師"
      type           = infantry
      model          = 6
    }
    division = {
      id             = { type = 22330 id = 55 }
      name           = "國民二軍第十一師"
      type           = cavalry
      model          = 4
    }
  }
  landunit = {
    id       = { type = 22330 id = 11 }
    name     = "国民军第三军 "
    location = 1269
    leader   = 56048
    division = {
      id             = { type = 22330 id = 12 }
      name           = "第二師"
      type           = infantry
      model          = 6
      strength       = 100
    }
    division = {
      id             = { type = 22330 id = 13 }
      name           = "第三師"
      type           = infantry
      model          = 6
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 22330 id = 14 }
      name           = "第四師"
      type           = infantry
      model          = 6
      strength       = 100
      max_strength   = 100
    }
    division = {
      id             = { type = 22330 id = 43 }
      name           = "暫編第一混成旅"
      type           = infantry
      model          = 6
      max_strength   = 80
    }
    division = {
      id             = { type = 22330 id = 44 }
      name           = "暫編第二混成旅"
      type           = infantry
      model          = 6
      max_strength   = 80
    }
    division = {
      id             = { type = 22330 id = 45 }
      name           = "暫編第三混成旅"
      type           = infantry
      model          = 6
      strength       = 80
      max_strength   = 80
    }
  }

  landdivision = { dormant = yes id = { type = 22330 id = 30 } name = "暂编第六师 "  type = infantry model = 7 strength = 100 extra = police brigade_model = 1 locked = yes } 
  landdivision = { dormant = yes id = { type = 22330 id = 31 } name = "西安守備师 "  type = garrison model = 2 experience = 20 locked = yes } 
}
