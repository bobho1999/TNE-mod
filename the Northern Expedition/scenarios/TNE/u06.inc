##############################
# Country definition for U06 #
##############################

country = {
  tag                = U06
  regular_id         = UCH
  ai                 = "u06_1925.ai"
  capital            = 1238 # 杭州
  dissent            = 20
  manpower           = 50
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

  nationalprovinces      = { 1217 1218 1219 1220 1221 1222 1231 1232 1233 1234 1235 1236 1238 1239 1240 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1255 1256 1257 1259 1260 1261 1264 1266 1312 1313 1314 1315 1316 1317 1318 1320 1321 1325 1875 1884 1885 1886 2610 2611 2612 2613 2614 2615 2616 2617 2618 2619 2620 2621 2622 2623 2625 2626 2627 2628 2629 2630 2631 2632 2635 2633 2634 2636 2637 2638 2639 2640 2641 2642 2643 2644 2645 2646 2647 2648 2649 2650 2652 2653 2654 2655 2656 2657 2658 2659 2660 2661 2662 2663 2664 2665 2666 2667 2668 2669 2670 2671 2672 2674 2676 2677 2678 2679 2680 2681 2682 2683 2684 2685 2686 2687 2688 2689 2690 2691 2692 2693 2694 2695 2696 2697 2698 2701 2702 2703 2704 2705 2706 2707 2708 2709 2710 2711 2712 2713 2714 2715 2716 2717 2718 2736 2739 2699 2700 1237 1258 1309 1310 1311 1319 2719 2720 2721 2722 2723 2724 2725 2726 2727 2728 2729 2730 2731 2732 2733 2734 2735 2795 1993 3768 3767 2606 2607 2608 2609 2996 }
  ownedprovinces         = { 1244 2704 2703 2701 1243 2702 1246 1245 1247 2706 1251 2693 2694 2695 1242 2696 2691 2697 2692 2698 2699 1252 2688 2690 2689 1254 2686 2687 1250 2700 1238 2631 2632 2635 2642 2643 1239 2636 2637 2639 2638 1241 1240 2640 2641 1234 2633 2634 2644 2645 2606 2996 }
  controlledprovinces    = { 1244 2704 2703 2701 1243 2702 1246 1245 1247 2706 1251 2693 2694 2695 1242 2696 2691 2697 2692 2698 2699 1252 2688 2690 2689 1254 2686 2687 1250 2700 1238 2631 2632 2635 2642 2643 1239 2636 2637 2639 2638 1241 1240 2640 2641 1234 2633 2634 2644 2606 2996 2645 }

  techapps               = { 4310 1010 1020 1030 1040 1050 1060 1070 1080 3510 8010 8040 8070 8080 8000 3300 3310 3350 1190 1200 1210 1220 1230 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 8
    professional_army = 3
    defense_lobby     = 10
    interventionism   = 4
  }
  chiefofnavy            = { type = 9 id = 16119 } # 陸軍管轄
  chiefofair             = { type = 9 id = 16008 } # 北洋軍閥 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 30036 id = 106000 }
    name     = "中央第二军 "
    location = 1238
    leader   = 50000
    division = {
      id             = { type = 30036 id = 106001 }
      name           = "五省联军总指挥部 "
      type           = hq
      model          = 0
      extra          = artillery
      brigade_model  = 0
      strength       = 100
      experience     = 50
    }
    division = {
      id             = { type = 30036 id = 106002 }
      name           = "中央第二师 "
      type           = infantry
      model          = 7
      extra          = police
      brigade_model  = 1
      strength       = 80
    }
    division = {
      id             = { type = 30036 id = 106003 }
      name           = "中央14混成旅 "
      type           = infantry
      model          = 7
      extra          = police
      brigade_model  = 1
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 30036 id = 106010 }
    name     = "督署卫队 "
    location = 1238
    leader   = 50003
    division = {
      id             = { type = 30036 id = 106011 }
      name           = "卫队团 "
      type           = infantry
      model          = 7
      extra          = police
      brigade_model  = 2
      strength       = 20
      max_strength   = 20
      experience     = 50
    }
  }
  landunit = {
    id       = { type = 30036 id = 106020 }
    name     = "中央第一军 "
    location = 1239
    leader   = 50006
    division = {
      id             = { type = 30036 id = 106021 }
      name           = "中央第10师 "
      type           = infantry
      model          = 7
      extra          = police
      brigade_model  = 1
      strength       = 60
      experience     = 25
    }
  }
  landunit = {
    id       = { type = 30036 id = 106030 }
    name     = "福建督军 "
    location = 1244
    leader   = 50020
    division = {
      id             = { type = 30036 id = 106031 }
      name           = "中央第十二師"
      type           = infantry
      model          = 7
    }
    division = {
      id             = { type = 30036 id = 106033 }
      name           = "閩軍第一師"
      type           = infantry
      model          = 6
      strength       = 70
    }
    division = {
      id             = { type = 30036 id = 106036 }
      name           = "閩軍第二師"
      type           = infantry
      model          = 6
      strength       = 70
    }
    division = {
      id             = { type = 30036 id = 106034 }
      name           = "閩軍第三師"
      type           = infantry
      model          = 6
      strength       = 70
    }
    division = {
      id             = { type = 30036 id = 106035 }
      name           = "閩軍第四師"
      type           = infantry
      model          = 6
      strength       = 70
    }
    division = {
      id             = { type = 30036 id = 106032 }
      name           = "福建补充旅 "
      type           = militia
      model          = 3
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 30036 id = 106037 }
      name           = "福建第一旅 "
      type           = militia
      model          = 3
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 30036 id = 106038 }
      name           = "福建第五旅 "
      type           = militia
      model          = 3
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 30036 id = 106039 }
      name           = "中央第二十九混成旅"
      type           = infantry
      model          = 6
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 30036 id = 106048 }
      name           = "中央第三十混成旅 "
      type           = infantry
      model          = 6
      strength       = 50
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 30036 id = 106040 }
    name     = "江西省军 "
    location = 1251
    leader   = 50009
    division = {
      id             = { type = 30036 id = 106041 }
      name           = "中央第一師"
      type           = infantry
      model          = 7
    }
    division = {
      id             = { type = 30036 id = 106043 }
      name           = "贛軍第一師"
      type           = infantry
      model          = 6
      strength       = 70
    }
    division = {
      id             = { type = 30036 id = 106045 }
      name           = "贛軍第二師"
      type           = infantry
      model          = 6
      strength       = 70
    }
    division = {
      id             = { type = 30036 id = 106044 }
      name           = "贛軍第四師"
      type           = infantry
      model          = 6
      strength       = 70
    }
    division = {
      id             = { type = 30036 id = 106046 }
      name           = "中央暫編第六師"
      type           = infantry
      model          = 7
    }
    division = {
      id             = { type = 30036 id = 106047 }
      name           = "中央第九混成旅"
      type           = infantry
      model          = 6
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 30036 id = 106042 }
      name           = "江西补充旅 "
      type           = militia
      model          = 3
      max_strength   = 50
    }
  }
  landunit = {
    id       = { type = 30036 id = 106050 }
    name     = "浙江省军 "
    location = 1241
    leader   = 50010
    division = {
      id             = { type = 30036 id = 106051 }
      name           = "浙軍第一師"
      type           = infantry
      model          = 6
      strength       = 70
    }
    division = {
      id             = { type = 30036 id = 106052 }
      name           = "浙軍第二師"
      type           = infantry
      model          = 6
      strength       = 70
    }
    division = {
      id             = { type = 30036 id = 106054 }
      name           = "浙軍第三師"
      type           = infantry
      model          = 6
      strength       = 70
    }
    division = {
      id             = { type = 30036 id = 106055 }
      name           = "浙軍第四師"
      type           = infantry
      model          = 6
      strength       = 70
    }
    division = {
      id             = { type = 30036 id = 106053 }
      name           = "浙江保安隊"
      type           = militia
      model          = 3
    }
    division = {
      id             = { type = 30036 id = 106056 }
      name           = "浙軍第四混成旅"
      type           = militia
      model          = 3
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 30036 id = 106057 }
      name           = "浙軍第六混成旅"
      type           = militia
      model          = 3
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 30036 id = 106058 }
      name           = "浙軍第七混成旅"
      type           = militia
      model          = 3
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 30036 id = 106059 }
      name           = "浙軍第八混成旅"
      type           = militia
      model          = 3
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 30036 id = 106063 }
      name           = "浙軍第十混成旅"
      type           = militia
      model          = 3
      strength       = 50
      max_strength   = 50
    }
    division = {
      id             = { type = 30036 id = 106064 }
      name           = "浙軍第二十四混成旅"
      type           = militia
      model          = 3
      strength       = 50
      max_strength   = 50
    }
  }

  landdivision = { dormant = yes id = { type = 30036 id = 1 } name = "江蘇第一師"  type = infantry model = 6 strength = 70 } 
  landdivision = { dormant = yes id = { type = 30036 id = 2 } name = "江蘇第三師"  type = infantry model = 6 strength = 70 } 
  landdivision = { dormant = yes id = { type = 30036 id = 3 } name = "江蘇第一旅"  type = infantry model = 5 strength = 50 max_strength = 50 } 
  landdivision = { dormant = yes id = { type = 30036 id = 4 } name = "江蘇第二旅"  type = infantry model = 5 strength = 50 max_strength = 50 } 
  landdivision = { dormant = yes id = { type = 30036 id = 5 } name = "江蘇第三旅"  type = infantry model = 5 strength = 50 max_strength = 50 } 
  landdivision = { dormant = yes id = { type = 30036 id = 6 } name = "江蘇第七十六旅"  type = militia model = 3 strength = 50 max_strength = 50 } 
  landdivision = { dormant = yes id = { type = 30036 id = 7 } name = "省防軍第一旅"  type = militia model = 3 strength = 50 max_strength = 50 } 
  landdivision = { dormant = yes id = { type = 30036 id = 11 } name = "皖軍第六師"  type = infantry model = 6 strength = 70 } 
  landdivision = { dormant = yes id = { type = 30036 id = 8 } name = "皖軍第一混成旅"  type = militia model = 3 strength = 50 max_strength = 50 } 
  landdivision = { dormant = yes id = { type = 30036 id = 10 } name = "皖軍第二混成旅"  type = militia model = 3 strength = 50 max_strength = 50 } 
  landdivision = { dormant = yes id = { type = 30036 id = 9 } name = "皖軍第三混成旅"  type = militia model = 3 strength = 50 max_strength = 50 } 
  landdivision = { dormant = yes id = { type = 30036 id = 12 } name = "安徽補充旅"  type = militia model = 3 strength = 50 max_strength = 50 } 
  landdivision = { dormant = yes id = { type = 30036 id = 13 } name = "南昌城防"  type = infantry model = 7 locked = yes } 
  landdivision = { dormant = yes id = { type = 30036 id = 14 } name = "福州城防"  type = infantry model = 7 locked = yes } 
}
