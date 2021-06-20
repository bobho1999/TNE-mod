##############################
# Country definition for U16 #
##############################

country = {
  tag                = U16
  regular_id         = CHI
  capital            = 2772 # 廣安
  dissent            = 20
  manpower           = 25
  peacetime_ic_mod       = 0.8
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 100

  nationalprovinces      = { 2769 2770 1279 2651 2771 2772 1889 2779 1888 1360 1361 2775 2780 2976 2778 1280 2768 1265 1263 2766 2767 2773 3000 2973 2972 1282 2977 2975 1281 2777 2776 2774 2969 1283 1890 2971 2970 2968 2967 }
  ownedprovinces         = { 2769 2770 1279 2651 2772 1889 2768 3000 }
  controlledprovinces    = { 2769 2770 1279 2651 2772 1889 2768 3000 }

  techapps               = { 3300 3310 3340 4400 4310 1010 1020 1030 1040 1050 1060 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 2
    free_market       = 5
    professional_army = 3
    defense_lobby     = 3
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 14000 } # 邓锡侯 
  headofgovernment       = { type = 9 id = 14010 } # 田颂尧 
  foreignminister        = { type = 9 id = 14002 } # 赖心辉 
  armamentminister       = { type = 9 id = 14003 } # 向传义 
  ministerofsecurity     = { type = 9 id = 14004 } # 向传义 
  ministerofintelligence = { type = 9 id = 14005 } # 赖心辉 
  chiefofstaff           = { type = 9 id = 14006 } # 陈国栋 
  chiefofarmy            = { type = 9 id = 14007 } # 邓锡侯 
  chiefofnavy            = { type = 9 id = 16119 } # 陸軍管轄
  chiefofair             = { type = 9 id = 16018 } # 南方軍閥 
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 20000 id = 1 }
    name     = "川軍(劉存厚部)"
    location = 2768
    leader   = 4006
    division = {
      id             = { type = 20000 id = 2 }
      name           = "第1師 (劉存厚部)"
      type           = infantry
      model          = 13
      strength       = 75
    }
    division = {
      id             = { type = 20000 id = 3 }
      name           = "第2師 (劉存厚部)"
      type           = militia
      model          = 2
      strength       = 75
    }
    division = {
      id             = { type = 20000 id = 27 }
      name           = "第1路 (劉存厚部)"
      type           = militia
      model          = 2
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 20000 id = 4 }
    name     = "川軍(邓锡侯部)"
    location = 2772
    leader   = 4000
    division = {
      id             = { type = 20000 id = 5 }
      name           = "川軍第1師(邓锡侯部)"
      type           = infantry
      model          = 13
      strength       = 80
    }
    division = {
      id             = { type = 20000 id = 6 }
      name           = "川軍第3師(邓锡侯部)"
      type           = infantry
      model          = 13
      strength       = 80
    }
    division = {
      id             = { type = 20000 id = 7 }
      name           = "全川江防軍(邓锡侯部)"
      type           = militia
      model          = 3
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 20000 id = 8 }
    name     = "川軍(赖心辉部)"
    location = 2651
    leader   = 4007
    division = {
      id             = { type = 20000 id = 9 }
      name           = "邊防軍第1師(赖心辉部)"
      type           = infantry
      model          = 13
      strength       = 80
    }
    division = {
      id             = { type = 20000 id = 10 }
      name           = "第10混成旅(赖心辉部)"
      type           = militia
      model          = 2
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 20000 id = 11 }
    name     = "川軍(田颂尧部)"
    location = 2770
    leader   = 4001
    division = {
      id             = { type = 20000 id = 12 }
      name           = "國軍第21師(田颂尧部)"
      type           = infantry
      model          = 13
      strength       = 80
    }
    division = {
      id             = { type = 20000 id = 13 }
      name           = "國軍第22師(田颂尧部)"
      type           = infantry
      model          = 13
      strength       = 80
    }
  }

  landdivision = { dormant = yes id = { type = 20000 id = 14 } name = "第28軍第1師"  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 20000 id = 15 } name = "第28軍第2師"  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 20000 id = 16 } name = "第28軍第3師"  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 20000 id = 17 } name = "第28軍第4師"  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 20000 id = 18 } name = "第28軍第5師"  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 20000 id = 19 } name = "第29軍第1師"  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 20000 id = 20 } name = "第29軍第2師"  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 20000 id = 21 } name = "第29軍第3師"  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 20000 id = 22 } name = "第22軍第1師"  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 20000 id = 23 } name = "第22軍第2師"  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 20000 id = 24 } name = "第22軍第3師"  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 20000 id = 25 } name = "第22軍第4師"  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 20000 id = 26 } name = "第22軍第5師"  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 20000 id = 28 } name = "第23軍第1師"  type = infantry model = 14 strength = 70 locked = yes } 
  landdivision = { dormant = yes id = { type = 20000 id = 29 } name = "第23軍第2師"  type = infantry model = 13 strength = 70 locked = yes } 
}
