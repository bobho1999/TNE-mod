##############################
# Country definition for U07 #
##############################

country = {
  tag                = U07
  regular_id         = CHI
  capital            = 1280 # 重慶市
  dissent            = 20
  manpower           = 30
  peacetime_ic_mod       = 0.8
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 100

  nationalprovinces      = { 2769 2770 1279 2651 2771 2772 1889 2779 1888 1360 1361 2775 2780 2976 2778 1280 2768 1265 1263 2766 2767 2773 3000 2973 2972 1282 2977 2975 1890 1281 2777 2776 2774 1283 2969 2971 2970 2967 2968 }
  ownedprovinces         = { 1280 1265 1263 2766 2767 2773 2771 }
  controlledprovinces    = { 1280 1265 1263 2766 2767 2773 2771 }

  techapps               = { 3300 3310 3340 4400 4310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 2
    free_market       = 5
    professional_army = 3
    defense_lobby     = 1
    interventionism   = 4
  }
  chiefofnavy            = { type = 9 id = 16119 } # 陸軍管轄 
  chiefofair             = { type = 9 id = 16018 } # 南方军閥
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 20030 id = 1 }
    name     = "川軍(刘湘部)"
    location = 1280
    division = {
      id             = { type = 20030 id = 2 }
      name           = "第1師(刘湘部)"
      type           = infantry
      model          = 13
    }
    division = {
      id             = { type = 20030 id = 3 }
      name           = "第2師(刘湘部)"
      type           = infantry
      model          = 13
    }
    division = {
      id             = { type = 20030 id = 4 }
      name           = "第3師(刘湘部)"
      type           = infantry
      model          = 13
    }
    division = {
      id             = { type = 20030 id = 5 }
      name           = "第4師(刘湘部)"
      type           = infantry
      model          = 13
    }
    division = {
      id             = { type = 20030 id = 6 }
      name           = "第5師(刘湘部)"
      type           = infantry
      model          = 13
    }
    division = {
      id             = { type = 20030 id = 7 }
      name           = "第6師(刘湘部)"
      type           = infantry
      model          = 13
    }
    division = {
      id             = { type = 20030 id = 8 }
      name           = "第4混成旅(刘湘部)"
      type           = militia
      model          = 3
    }
    division = {
      id             = { type = 20030 id = 9 }
      name           = "第6混成旅(刘湘部)"
      type           = militia
      model          = 3
    }
  }

  landdivision = { dormant = yes id = { type = 20030 id = 10 } name = "第21軍第1師"  type = infantry model = 14 } 
  landdivision = { dormant = yes id = { type = 20030 id = 11 } name = "第21軍第2師"  type = infantry model = 14 } 
  landdivision = { dormant = yes id = { type = 20030 id = 12 } name = "第21軍第3師"  type = infantry model = 14 } 
  landdivision = { dormant = yes id = { type = 20030 id = 13 } name = "第21軍第4師"  type = infantry model = 14 } 
  landdivision = { dormant = yes id = { type = 20030 id = 14 } name = "第21軍第5師"  type = infantry model = 14 } 
  landdivision = { dormant = yes id = { type = 20030 id = 15 } name = "第21軍第6師"  type = infantry model = 14 } 
  landdivision = { dormant = yes id = { type = 20030 id = 16 } name = "第21軍第8師"  type = infantry model = 14 } 
}
