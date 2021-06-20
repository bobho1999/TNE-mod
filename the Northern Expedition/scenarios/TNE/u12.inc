##############################
# Country definition for U12 #
##############################
province = {
  id = 1248 # 汕頭
}
province = {
  id = 1318 # 茂名
}
province = {
  id = 1321 # 瓊山
  supplypool = 500
}
province = {
  id = 1325 # 欽縣
}

#####################
# Country main data #
#####################

country = {
  tag                = U12
  capital            = 1248 # 汕頭
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

  nationalprovinces      = { 1248 1249 1312 1313 1314 1315 1316 1317 1318 1320 1321 1325 2707 2708 2709 2710 2711 2712 2713 2714 2715 2716 2717 2718 2736 2739 1258 1309 1310 1311 1319 2719 2720 2721 2722 2723 2724 2725 2726 2727 2728 2730 2731 2732 2733 2734 2735 1993 3768 3767 2729 }
  ownedprovinces         = { 2709 1248 2710 2705 2716 1325 1321 2717 2718 3768 2739 2715 1318 2713 2712 }
  controlledprovinces    = { 2709 1248 2710 2705 2716 1325 1321 2717 2718 3768 2739 2715 1318 2713 2712 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 3510 3300 3310 3350 4400 4310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 2
    free_market       = 5
    professional_army = 3
    defense_lobby     = 6
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 11000 } # 陈炯明 
  headofgovernment       = { type = 9 id = 11001 } # 陈炯明 
  foreignminister        = { type = 9 id = 11002 } # 陈炯明
  armamentminister       = { type = 9 id = 11003 } # 林虎 
  ministerofsecurity     = { type = 9 id = 11004 } # 林虎 
  ministerofintelligence = { type = 9 id = 11005 } # 林虎 
  chiefofstaff           = { type = 9 id = 11006 } # 洪兆麟 
  chiefofarmy            = { type = 9 id = 11007 } # 洪兆麟 
  chiefofnavy            = { type = 9 id = 16119 } # 陸軍管轄
  chiefofair             = { type = 9 id = 16018 } # 南方軍閥 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 22001 id = 112000 }
    name     = "救粤讨贼第一军 "
    location = 1248
    leader   = 78001
    division = {
      id             = { type = 22001 id = 112001 }
      name           = "救粤第一师 "
      type           = infantry
      model          = 6
      extra          = police
      brigade_model  = 1
      strength       = 80
      experience     = 50
      locked         = yes
    }
    division = {
      id             = { type = 22001 id = 112002 }
      name           = "救粤第二师 "
      type           = infantry
      model          = 5
      strength       = 80
      locked         = yes
    }
    division = {
      id             = { type = 22001 id = 112003 }
      name           = "救粤第六师 "
      type           = militia
      model          = 3
      strength       = 100
      experience     = 25
    }
  }
  landunit = {
    id       = { type = 22000 id = 112010 }
    name     = "救粤讨贼第二军 "
    location = 2709
    leader   = 78002
    division = {
      id             = { type = 22001 id = 112011 }
      name           = "救粤第三师 "
      type           = infantry
      model          = 13
      strength       = 80
    }
    division = {
      id             = { type = 22001 id = 112012 }
      name           = "救粤第四师 "
      type           = militia
      model          = 3
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 22001 id = 112013 }
      name           = "救粤第五师 "
      type           = militia
      model          = 3
      strength       = 100
      experience     = 25
    }
  }
  landunit = {
    id       = { type = 22000 id = 112020 }
    name     = "救粤讨贼第二军 "
    location = 2709
    division = {
      id             = { type = 22001 id = 112021 }
      name           = "救粤第三师 "
      type           = infantry
      model          = 5
      extra          = police
      brigade_model  = 1
      strength       = 80
      experience     = 40
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 112030 }
    name     = "八屬聯軍第一軍 "
    location = 1321
    leader   = 78007
    division = {
      id             = { type = 22001 id = 112031 }
      name           = "八屬聯軍第一師 "
      type           = infantry
      model          = 5
      strength       = 50
      experience     = 20
      locked         = yes
    }
    division = {
      id             = { type = 22001 id = 112032 }
      name           = "八屬聯軍第二師 "
      type           = militia
      model          = 3
      strength       = 50
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 112033 }
    name     = "八屬聯軍第二軍 "
    location = 2713
    leader   = 78016
    division = {
      id             = { type = 22001 id = 112034 }
      name           = "八屬聯軍第三師 "
      type           = militia
      model          = 3
      strength       = 50
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 112035 }
    name     = "八屬聯軍第三軍 "
    location = 1318
    division = {
      id             = { type = 22001 id = 112036 }
      name           = "八屬聯軍第四師 "
      type           = militia
      model          = 3
      strength       = 50
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 112037 }
    name     = "八屬聯軍第四軍 "
    location = 2715
    division = {
      id             = { type = 22001 id = 112038 }
      name           = "八屬聯軍第五師 "
      type           = militia
      model          = 3
      strength       = 50
      experience     = 20
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 22000 id = 112039 }
    name     = "八屬聯軍第五軍 "
    location = 1325
    leader   = 78008
    division = {
      id             = { type = 22001 id = 112040 }
      name           = "八屬聯軍第六師 "
      type           = infantry
      model          = 5
      strength       = 50
      experience     = 20
      locked         = yes
    }
  }

  landdivision = { dormant = yes id = { type = 22001 id = 1 } name = "建國粵軍第5師"  type = infantry model = 6 locked = yes } 
  landdivision = { dormant = yes id = { type = 22001 id = 2 } name = "建國粵軍第6師"  type = infantry model = 5 locked = yes } 
  landdivision = { dormant = yes id = { type = 22001 id = 3 } name = "建國粵軍第7師"  type = infantry model = 5 locked = yes } 
}
