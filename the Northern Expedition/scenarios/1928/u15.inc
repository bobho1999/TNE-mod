##############################
# Country definition for U15 #
##############################

country = {
  tag                = U15
  regular_id         = CHI
  capital            = 1360 # 成都市
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

  nationalprovinces      = { 2769 2770 1279 2651 2771 2772 1889 2779 1888 1360 1361 2775 2780 2976 2778 1280 2768 1265 1263 2766 2767 2773 3000 2973 2972 1282 2977 2975 1890 1281 2777 2776 2774 1283 2969 2968 2967 2970 2971 }
  ownedprovinces         = { 2779 1888 1360 1361 2775 2780 2976 2778 }
  controlledprovinces    = { 2779 1888 1360 1361 2775 2780 2976 2778 }

  techapps               = { 3300 3310 3340 4400 4310 1060 1050 1040 1030 1020 1010 }

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
  chiefofnavy            = { type = 9 id = 16119 } # 陸軍管轄
  chiefofair             = { type = 9 id = 16018 } # 南方軍閥 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 20010 id = 1 }
    name     = "川軍(杨森部)"
    location = 1360
    leader   = 2000
    division = {
      id             = { type = 20010 id = 2 }
      name           = "第1師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 60
      locked         = yes
    }
    division = {
      id             = { type = 20010 id = 5 }
      name           = "第2師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 60
      locked         = yes
    }
    division = {
      id             = { type = 20010 id = 6 }
      name           = "第3師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 60
    }
    division = {
      id             = { type = 20010 id = 7 }
      name           = "第4師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 60
    }
    division = {
      id             = { type = 20010 id = 8 }
      name           = "第5師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 60
    }
    division = {
      id             = { type = 20010 id = 9 }
      name           = "第6師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 60
    }
    division = {
      id             = { type = 20010 id = 10 }
      name           = "第7師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 60
    }
    division = {
      id             = { type = 20010 id = 11 }
      name           = "第8師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 60
    }
    division = {
      id             = { type = 20010 id = 12 }
      name           = "第9師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 60
    }
    division = {
      id             = { type = 20010 id = 13 }
      name           = "第10師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 60
    }
    division = {
      id             = { type = 20010 id = 14 }
      name           = "第11師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 50
    }
    division = {
      id             = { type = 20010 id = 15 }
      name           = "第12師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 50
    }
    division = {
      id             = { type = 20010 id = 16 }
      name           = "第13師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 50
    }
    division = {
      id             = { type = 20010 id = 17 }
      name           = "第14師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 50
    }
    division = {
      id             = { type = 20010 id = 18 }
      name           = "第15師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 50
    }
    division = {
      id             = { type = 20010 id = 19 }
      name           = "第16師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 50
    }
    division = {
      id             = { type = 20010 id = 20 }
      name           = "第17師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 50
    }
    division = {
      id             = { type = 20010 id = 21 }
      name           = "第18師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 50
    }
    division = {
      id             = { type = 20010 id = 22 }
      name           = "第19師(杨森部)"
      type           = infantry
      model          = 13
      strength       = 50
    }
    division = {
      id             = { type = 20010 id = 4 }
      name           = "第1混成旅(杨森部)"
      type           = militia
      model          = 2
      strength       = 45
    }
    division = {
      id             = { type = 20010 id = 23 }
      name           = "第2混成旅(杨森部)"
      type           = militia
      model          = 2
      strength       = 45
    }
    division = {
      id             = { type = 20010 id = 24 }
      name           = "第3混成旅(杨森部)"
      type           = militia
      model          = 2
      strength       = 45
    }
    division = {
      id             = { type = 20010 id = 25 }
      name           = "第4混成旅(杨森部)"
      type           = militia
      model          = 2
      strength       = 45
    }
    division = {
      id             = { type = 20010 id = 26 }
      name           = "第5混成旅(杨森部)"
      type           = militia
      model          = 2
      strength       = 45
    }
    division = {
      id             = { type = 20010 id = 27 }
      name           = "第6混成旅(杨森部)"
      type           = militia
      model          = 2
      strength       = 45
    }
    division = {
      id             = { type = 20010 id = 28 }
      name           = "第7混成旅(杨森部)"
      type           = militia
      model          = 2
      strength       = 45
    }
    division = {
      id             = { type = 20010 id = 29 }
      name           = "第8混成旅(杨森部)"
      type           = militia
      model          = 2
      strength       = 45
    }
    division = {
      id             = { type = 20010 id = 30 }
      name           = "第9混成旅(杨森部)"
      type           = militia
      model          = 2
      strength       = 45
    }
    division = {
      id             = { type = 20010 id = 31 }
      name           = "第10混成旅(杨森部)"
      type           = militia
      model          = 2
      strength       = 45
    }
    division = {
      id             = { type = 20010 id = 32 }
      name           = "第11混成旅(杨森部)"
      type           = militia
      model          = 2
      strength       = 45
    }
    division = {
      id             = { type = 20010 id = 33 }
      name           = "第12混成旅(杨森部)"
      type           = militia
      model          = 2
      strength       = 45
    }
  }

  landdivision = { dormant = yes id = { type = 20010 id = 3 } name = "第20軍第1路"  type = infantry model = 14 strength = 70 } 
  landdivision = { dormant = yes id = { type = 20010 id = 34 } name = "第20軍第6路"  type = infantry model = 14 strength = 70 } 
  landdivision = { dormant = yes id = { type = 20010 id = 35 } name = "第20軍第4師"  type = infantry model = 14 strength = 60 } 
  landdivision = { dormant = yes id = { type = 20010 id = 36 } name = "第20軍第5師"  type = infantry model = 14 strength = 60 } 
  landdivision = { dormant = yes id = { type = 20010 id = 37 } name = "第20軍第7師"  type = infantry model = 14 strength = 60 } 
  landdivision = { dormant = yes id = { type = 20010 id = 38 } name = "第20軍第11師"  type = infantry model = 14 strength = 60 } 
  landdivision = { dormant = yes id = { type = 20010 id = 39 } name = "第20軍第13師"  type = infantry model = 14 strength = 60 } 
  landdivision = { dormant = yes id = { type = 20010 id = 40 } name = "第20軍第14師"  type = infantry model = 14 strength = 60 } 
  landdivision = { dormant = yes id = { type = 20010 id = 41 } name = "第20軍第15師"  type = infantry model = 14 strength = 60 } 
  landdivision = { dormant = yes id = { type = 20010 id = 42 } name = "第20軍第1混成旅"  type = militia model = 3 strength = 40 } 
  landdivision = { dormant = yes id = { type = 20010 id = 43 } name = "第20軍第2混成旅"  type = militia model = 3 strength = 40 } 
  landdivision = { dormant = yes id = { type = 20010 id = 44 } name = "第20軍第3混成旅"  type = militia model = 3 strength = 40 } 
  landdivision = { dormant = yes id = { type = 20010 id = 45 } name = "第20軍第4混成旅"  type = militia model = 3 strength = 40 } 
  landdivision = { dormant = yes id = { type = 20010 id = 46 } name = "第20軍第5混成旅"  type = militia model = 3 strength = 40 } 
}
