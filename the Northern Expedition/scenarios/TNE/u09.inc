##############################
# Country definition for U09 #
##############################

#province = {
#  id = 1364 # 
#  ic = { size = 0 current_size = 0 }
#}
country = {
  tag                = U09
  regular_id         = CHI
  capital            = 1364 # 貴陽
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

  diplomacy = {
    relation = { tag = U07 value = 0 access = yes }
  }

  nationalprovinces      = { 1363 2744 1262 2742 2741 2743 2740 1364 2738 1365 2737 2745 }
  ownedprovinces         = { 1363 2744 1262 2742 2741 2743 2740 1364 2738 1365 2737 2745 }
  controlledprovinces    = { 1363 2744 1262 2742 2741 2743 2740 1364 2738 1365 2737 2745 }

  techapps               = { 1010 1100 1110 1120 1130 1140 3300 3310 3350 4400 4310 }

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
  chiefofair             = { type = 9 id = 16018 } # 南方军閥
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 15001 id = 1 }
    name     = "黔军第一師"
    location = 1280
    leader   = 80000
    division = {
      id             = { type = 15004 id = 1 }
      name           = "黔军第一师"
      type           = infantry
      model          = 13
      experience     = 10
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 15001 id = 3 }
    name     = "黔军第二師"
    location = 1363
    division = {
      id             = { type = 15004 id = 2 }
      name           = "黔军第二師"
      type           = infantry
      model          = 5
    }
  }
  landunit = {
    id       = { type = 15001 id = 2 }
    name     = "黔军第二军"
    location = 1364
    leader   = 80001
    division = {
      id             = { type = 15004 id = 3 }
      name           = "黔军第三师"
      type           = infantry
      model          = 13
    }
    division = {
      id             = { type = 15004 id = 4 }
      name           = "黔军第四师"
      type           = infantry
      model          = 13
    }
  }

  landdivision = { dormant = yes id = { type = 15004 id = 5 } name = "第九軍第1師 "  type = infantry model = 14 strength = 80 max_strength = 100 } 
  landdivision = { dormant = yes id = { type = 15004 id = 6 } name = "第九軍第2師 "  type = infantry model = 14 strength = 80 max_strength = 100 } 
  landdivision = { dormant = yes id = { type = 15004 id = 7 } name = "第九軍第3師 "  type = infantry model = 14 strength = 80 max_strength = 100 } 
  landdivision = { dormant = yes id = { type = 15004 id = 8 } name = "国民革命军第28師 "  type = infantry model = 14 strength = 80 max_strength = 100 } 
  landdivision = { dormant = yes id = { type = 15004 id = 9 } name = "国民革命军第29師 "  type = infantry model = 14 strength = 80 max_strength = 100 } 
  landdivision = { dormant = yes id = { type = 15004 id = 10 } name = "国民革命军第30師 "  type = infantry model = 14 strength = 80 max_strength = 100 } 
  landdivision = { dormant = yes id = { type = 15004 id = 11 } name = "第25軍第1師"  type = infantry model = 14 strength = 80 max_strength = 100 locked = yes } 
  landdivision = { dormant = yes id = { type = 15004 id = 12 } name = "第25軍第2師"  type = infantry model = 14 strength = 80 max_strength = 100 locked = yes } 
  landdivision = { dormant = yes id = { type = 15004 id = 13 } name = "第25軍第3師"  type = infantry model = 14 strength = 80 max_strength = 100 locked = yes } 
  landdivision = { dormant = yes id = { type = 15004 id = 14 } name = "第12軍第1師"  type = infantry model = 14 strength = 80 max_strength = 100 } 
  landdivision = { dormant = yes id = { type = 15004 id = 15 } name = "第12軍第2師"  type = infantry model = 14 strength = 80 max_strength = 100 } 
  landdivision = { dormant = yes id = { type = 15004 id = 16 } name = "第12軍第3師"  type = infantry model = 14 strength = 80 max_strength = 100 } 
}
