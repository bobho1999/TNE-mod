##############################
# Country definition for CSX #
##############################

country = {
  tag                = CSX
  regular_id         = CHI
  ai                 = "csx_1925.ai"
  intrinsic_gov_type = paternal_autocrat
  capital            = 1225 # 太原
  dissent            = 25
  extra_tc           = 20
  manpower           = 30
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50
  SpyInfo                = { country = "CSX" NumberOfSpies = 10 }

  nationalprovinces      = { 1170 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1224 1225 1226 1271 1272 1273 1397 1398 1439 1595 1810 1811 1894 2673 2748 2785 2787 2788 2789 2790 2791 2792 2793 2794 2796 2802 2803 2804 2808 2809 2810 2811 2812 2813 2814 2815 2816 2817 2819 2820 2821 2822 2823 2824 2825 2826 2827 2828 2829 2830 2831 2832 2833 2834 2835 2836 2837 2838 2839 2850 2851 2852 2853 2854 2855 2856 2857 2858 2859 2860 2861 2862 2863 2864 2865 2866 2867 2868 2869 2870 2871 2872 2873 2874 2875 2876 2881 2939 2940 2941 2942 2943 2944 2945 2946 2947 2992 2993 2994 1386 }
  ownedprovinces         = { 1209 1225 1226 2819 2820 2821 2822 2823 2824 2825 2826 2827 2828 2829 2830 2831 2832 2833 2834 2835 2836 2837 }
  controlledprovinces    = { 1209 1225 1226 2819 2820 2821 2822 2823 2824 2825 2826 2827 2828 2829 2830 2831 2832 2833 2834 2835 2836 2837 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 3500 8010 8040 8070 8080 8000 3300 3310 3350 4400 4310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 3
  }
  chiefofnavy            = { type = 9 id = 16119 } # 陸軍管轄
  chiefofair             = { type = 9 id = 16008 } # 北洋軍閥 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 22300 id = 1 }
    name     = "晋绥军第一军 "
    location = 2831
    leader   = 20002
    division = {
      id             = { type = 22300 id = 2 }
      name           = "第一师 "
      type           = infantry
      model          = 7
      extra          = heavy_armor
      brigade_model  = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22300 id = 3 }
    name     = "晋绥军第二军 "
    location = 2823
    leader   = 20017
    division = {
      id             = { type = 22300 id = 4 }
      name           = "第二师 "
      type           = infantry
      model          = 7
      extra          = heavy_armor
      brigade_model  = 1
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 22300 id = 5 }
    name     = "晋绥军第三军 "
    location = 1225
    leader   = 20003
    division = {
      id             = { type = 22300 id = 6 }
      name           = "第五旅 "
      type           = infantry
      model          = 6
      strength       = 60
      max_strength   = 60
    }
  }
  landunit = {
    id       = { type = 22300 id = 7 }
    name     = "晋绥军第四军 "
    location = 1209
    leader   = 20012
    division = {
      id             = { type = 22300 id = 8 }
      name           = "第六旅 "
      type           = infantry
      model          = 6
      strength       = 60
      max_strength   = 60
    }
  }
  landunit = {
    id       = { type = 22300 id = 9 }
    name     = "晋绥军第五军 "
    location = 2823
    leader   = 20019
    division = {
      id             = { type = 22300 id = 10 }
      name           = "第七旅 "
      type           = infantry
      model          = 6
      strength       = 60
      max_strength   = 60
    }
  }
  landunit = {
    id       = { type = 22300 id = 11 }
    name     = "晋绥军第六军 "
    location = 2821
    leader   = 20022
    division = {
      id             = { type = 22300 id = 12 }
      name           = "第八旅 "
      type           = infantry
      model          = 6
      strength       = 60
      max_strength   = 60
    }
  }
  landunit = {
    id       = { type = 22300 id = 13 }
    name     = "晋绥军第七军 "
    location = 1225
    leader   = 20021
    division = {
      id             = { type = 22300 id = 14 }
      name           = "第九旅 "
      type           = infantry
      model          = 6
      strength       = 60
      max_strength   = 60
    }
  }
  landunit = {
    id       = { type = 22300 id = 15 }
    name     = "晋绥军第八军 "
    location = 1226
    leader   = 20023
    division = {
      id             = { type = 22300 id = 16 }
      name           = "第十旅 "
      type           = infantry
      model          = 6
      strength       = 60
      max_strength   = 60
    }
  }
  landunit = {
    id       = { type = 22300 id = 17 }
    name     = "晋绥军第九军 "
    location = 2824
    leader   = 20024
    division = {
      id             = { type = 22300 id = 18 }
      name           = "第十一旅 "
      type           = infantry
      model          = 6
      strength       = 60
      max_strength   = 60
    }
  }
  landunit = {
    id       = { type = 22300 id = 19 }
    name     = "晋绥军第十军 "
    location = 2820
    leader   = 20025
    division = {
      id             = { type = 22300 id = 20 }
      name           = "手掷弹旅 "
      type           = infantry
      model          = 7
      extra          = artillery
      brigade_model  = 1
      strength       = 60
      max_strength   = 60
    }
  }
}
