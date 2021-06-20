##############################
# Country definition for CGX #
##############################

country = {
  tag                = CGX
  regular_id         = CHI
  ai                 = "cgx_1925.ai"
  intrinsic_gov_type = paternal_autocrat
  capital            = 1311 # 蒼梧（梧州）
  dissent            = 20
  extra_tc           = 10
  manpower           = 20
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50
  transports     = 40
  escorts        = 10

  diplomacy = {
    relation = { tag = CHI value = 200 access = yes }
    relation = { tag = CHC value = 200 }
    relation = { tag = U03 value = 50 }
    relation = { tag = SOV value = 100 }
    relation = { tag = JAP value = 50 }
    relation = { tag = U12 value = -200 }
    relation = { tag = CYN value = 100 }
  }
  SpyInfo                = { country = "CGX" NumberOfSpies = 10 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 5 }

  nationalprovinces      = { 1309 1311 1319 2719 2720 2721 2722 2723 2724 2725 2726 2734 2735 2736 2727 2728 2729 1258 1310 2730 2731 2732 2733 }
  ownedprovinces         = { 1309 1311 1319 2719 2720 2721 2722 2723 2724 2725 2726 2734 2735 2736 }
  controlledprovinces    = { 1309 1311 1319 2719 2720 2721 2722 2723 2724 2725 2726 2734 2735 2736 }

  techapps               = { 8140 1010 1100 1110 1120 1130 1140 1150 3500 3300 3310 3350 4400 4310 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 4
    interventionism   = 4
  }
  headofstate            = { type = 6 id = 500 } # 李宗仁 
  headofgovernment       = { type = 6 id = 513 } # 李宗仁 
  foreignminister        = { type = 6 id = 502 } # 黄绍竑 
  armamentminister       = { type = 6 id = 503 } # 黄旭初 
  ministerofsecurity     = { type = 6 id = 504 } # 黄绍竑 
  ministerofintelligence = { type = 6 id = 505 } # 李宗仁 
  chiefofstaff           = { type = 6 id = 506 } # 白崇禧 
  chiefofarmy            = { type = 6 id = 507 } # 白崇禧 
  chiefofnavy            = { type = 9 id = 16119 } # 陸軍管轄
  chiefofair             = { type = 9 id = 16028 } # 國民黨 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 15051 id = 1 }
    name     = "广西定桂讨贼联军 "
    location = 1311
    leader   = 14001
    division = {
      id             = { type = 15054 id = 1 }
      name           = "联军第一师 "
      type           = bergsjaeger
      model          = 0
      extra          = police
      brigade_model  = 1
      strength       = 80
      max_strength   = 80
      experience     = 50
    }
    division = {
      id             = { type = 15054 id = 2 }
      name           = "联军第二师 "
      type           = infantry
      model          = 13
      extra          = police
      brigade_model  = 1
      strength       = 80
      max_strength   = 80
      experience     = 50
    }
  }
  landunit = {
    id       = { type = 15051 id = 2 }
    name     = "广西定桂讨贼联军 "
    location = 1309
    leader   = 14000
    division = {
      id             = { type = 15054 id = 3 }
      name           = "联军第三师 "
      type           = infantry
      model          = 13
      strength       = 80
      max_strength   = 80
      experience     = 50
    }
  }
  landunit = {
    id       = { type = 15051 id = 3 }
    name     = "广西定桂讨贼联军 "
    location = 1311
    leader   = 14002
    division = {
      id             = { type = 15054 id = 4 }
      name           = "联军独立旅 "
      type           = bergsjaeger
      model          = 0
      strength       = 50
      max_strength   = 70
      experience     = 50
    }
  }

  landdivision = { dormant = yes id = { type = 15054 id = 5 } name = "第七軍第一旅 "  type = bergsjaeger model = 1 strength = 50 max_strength = 100 experience = 50 } 
  landdivision = { dormant = yes id = { type = 15054 id = 6 } name = "第七军第二旅 "  type = bergsjaeger model = 1 strength = 50 max_strength = 100 experience = 50 } 
  landdivision = { dormant = yes id = { type = 15054 id = 7 } name = "第七军第七旅 "  type = bergsjaeger model = 1 strength = 50 max_strength = 100 experience = 50 } 
  landdivision = { dormant = yes id = { type = 15054 id = 8 } name = "第七军第八旅 "  type = infantry model = 15 strength = 50 extra = artillery brigade_model = 0  max_strength = 100 experience = 50 } 
  landdivision = { dormant = yes id = { type = 15054 id = 9 } name = "第七军第三旅 "  type = infantry model = 15 strength = 50 extra = artillery brigade_model = 0  max_strength = 100 } 
  landdivision = { dormant = yes id = { type = 15054 id = 10 } name = "第七军第四旅 "  type = infantry model = 15 strength = 50 max_strength = 100 } 
  landdivision = { dormant = yes id = { type = 15054 id = 11 } name = "第七军第五旅 "  type = infantry model = 15 strength = 50 max_strength = 100 } 
  landdivision = { dormant = yes id = { type = 15054 id = 12 } name = "第七军第六旅 "  type = infantry model = 15 strength = 50 max_strength = 100 } 
  landdivision = { dormant = yes id = { type = 15054 id = 13 } name = "第七军第九旅 "  type = infantry model = 15 strength = 50 max_strength = 100 } 
  landdivision = { dormant = yes id = { type = 15054 id = 14 } name = "第七軍獨立第一團 "  type = infantry model = 15 strength = 40 max_strength = 50 } 
}
