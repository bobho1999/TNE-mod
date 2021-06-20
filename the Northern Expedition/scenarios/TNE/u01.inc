##############################
# Country definition for U01 #
##############################

country = {
  tag                = U01
  regular_id         = CHI
  capital            = 2776 # 宜賓
  dissent            = 20
  manpower           = 20
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

  nationalprovinces      = { 2769 2770 1279 2651 2771 2772 1889 2779 1888 1360 1361 2775 2780 2976 2778 1280 2768 1265 1263 2766 2767 2773 3000 2973 2972 1282 2977 2975 1890 1281 2777 2776 2774 1283 2969 2971 2970 2967 2968 }
  ownedprovinces         = { 2973 2972 1282 2977 2975 1890 1281 2777 2776 2774 }
  controlledprovinces    = { 2973 2972 1282 2977 2975 1890 1281 2777 2776 2774 }

  techapps               = { 3300 3310 3340 4400 4310 1010 1020 1030 1040 1050 1060 }

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
  chiefofair             = { type = 9 id = 16018 } # 南方軍閥 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 20020 id = 1 }
    name     = "川軍(刘文辉部)"
    location = 2776
    leader   = 84001
    division = {
      id             = { type = 20020 id = 2 }
      name           = "第1師(刘文辉部 )"
      type           = infantry
      model          = 13
      strength       = 75
    }
    division = {
      id             = { type = 20020 id = 3 }
      name           = "第2師(刘文辉部 )"
      type           = infantry
      model          = 13
      strength       = 75
    }
    division = {
      id             = { type = 20020 id = 4 }
      name           = "第3師(刘文辉部 )"
      type           = infantry
      model          = 13
      strength       = 75
    }
    division = {
      id             = { type = 20020 id = 5 }
      name           = "第4師(刘文辉部 )"
      type           = infantry
      model          = 13
      strength       = 75
    }
    division = {
      id             = { type = 20020 id = 6 }
      name           = "第1混成旅(刘文辉部 )"
      type           = militia
      model          = 2
      strength       = 60
    }
    division = {
      id             = { type = 20020 id = 7 }
      name           = "第2混成旅(刘文辉部 )"
      type           = militia
      model          = 2
      strength       = 60
    }
    division = {
      id             = { type = 20020 id = 8 }
      name           = "第3混成旅(刘文辉部 )"
      type           = militia
      model          = 2
      strength       = 60
    }
    division = {
      id             = { type = 20020 id = 9 }
      name           = "第4混成旅(刘文辉部 )"
      type           = militia
      model          = 2
      strength       = 60
    }
    division = {
      id             = { type = 20020 id = 10 }
      name           = "第5混成旅(刘文辉部 )"
      type           = militia
      model          = 2
      strength       = 60
    }
    division = {
      id             = { type = 20020 id = 11 }
      name           = "第6混成旅(刘文辉部 )"
      type           = militia
      model          = 2
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 20020 id = 12 }
    name     = "川軍(刘成勋部)"
    location = 1282
    leader   = 84011
    division = {
      id             = { type = 20020 id = 13 }
      name           = "川軍第11師(刘成勋部 )"
      type           = infantry
      model          = 13
      strength       = 80
    }
    division = {
      id             = { type = 20020 id = 14 }
      name           = "川軍第12師(刘成勋部 )"
      type           = infantry
      model          = 13
      strength       = 80
    }
    division = {
      id             = { type = 20020 id = 15 }
      name           = "第4混成旅(刘成勋部 )"
      type           = militia
      model          = 2
    }
  }

  landdivision = { dormant = yes id = { type = 20020 id = 16 } name = "第24軍第1路"  type = infantry model = 14 strength = 80 } 
  landdivision = { dormant = yes id = { type = 20020 id = 17 } name = "第24軍第2路"  type = infantry model = 14 strength = 80 } 
  landdivision = { dormant = yes id = { type = 20020 id = 18 } name = "第24軍第3路"  type = infantry model = 14 strength = 80 } 
  landdivision = { dormant = yes id = { type = 20020 id = 19 } name = "第24軍第4路"  type = infantry model = 14 strength = 80 } 
  landdivision = { dormant = yes id = { type = 20020 id = 20 } name = "第24軍第1混成旅"  type = militia model = 3 strength = 45 } 
  landdivision = { dormant = yes id = { type = 20020 id = 21 } name = "第24軍第2混成旅"  type = militia model = 3 strength = 45 } 
  landdivision = { dormant = yes id = { type = 20020 id = 22 } name = "第24軍第3混成旅"  type = militia model = 3 strength = 45 } 
  landdivision = { dormant = yes id = { type = 20020 id = 23 } name = "第24軍第4混成旅"  type = militia model = 3 strength = 45 } 
  landdivision = { dormant = yes id = { type = 20020 id = 24 } name = "第24軍第5混成旅"  type = militia model = 3 strength = 45 } 
  landdivision = { dormant = yes id = { type = 20020 id = 25 } name = "第24軍第6混成旅"  type = militia model = 3 strength = 45 } 
  landdivision = { dormant = yes id = { type = 20020 id = 26 } name = "第24軍第7混成旅"  type = militia model = 3 strength = 45 } 
  landdivision = { dormant = yes id = { type = 20020 id = 27 } name = "第24軍第8混成旅"  type = militia model = 3 strength = 45 } 
  landdivision = { dormant = yes id = { type = 20020 id = 28 } name = "第24軍第9混成旅"  type = militia model = 3 strength = 45 } 
  landdivision = { dormant = yes id = { type = 20020 id = 29 } name = "第24軍第10混成旅"  type = militia model = 3 strength = 45 } 
  landdivision = { dormant = yes id = { type = 20020 id = 30 } name = "第24軍第5路"  type = infantry model = 14 strength = 80 } 
  landdivision = { dormant = yes id = { type = 20020 id = 31 } name = "第24軍第6路"  type = infantry model = 14 strength = 80 } 
  landdivision = { dormant = yes id = { type = 20020 id = 32 } name = "第24軍第7路"  type = infantry model = 14 strength = 80 } 
  landdivision = { dormant = yes id = { type = 20020 id = 33 } name = "第23軍第1師"  type = infantry model = 14 strength = 75 } 
  landdivision = { dormant = yes id = { type = 20020 id = 34 } name = "第23軍第2師"  type = infantry model = 14 strength = 75 } 
  landdivision = { dormant = yes id = { type = 20020 id = 35 } name = "第23軍第3師"  type = infantry model = 14 strength = 75 } 
  landdivision = { dormant = yes id = { type = 20020 id = 36 } name = "第23軍第4師"  type = infantry model = 14 strength = 75 } 
  landdivision = { dormant = yes id = { type = 20020 id = 37 } name = "第23軍邊防軍"  type = infantry model = 14 strength = 75 } 
  landdivision = { dormant = yes id = { type = 20020 id = 38 } name = "川康邊防軍"  type = infantry model = 14 strength = 75 } 
}
