##############################
# Country definition for TIB #
##############################

country = {
  tag                = TIB
  ai                 = "tib_1925.ai"
  capital            = 1453 # 拉薩
  manpower           = 10
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 10
  SpyInfo                = { country = "TIB" NumberOfSpies = 10 }

  nationalprovinces      = { 1283 1448 1450 1451 1452 1453 2964 2966 2967 2968 2969 2970 2971 1442 1443 1444 2955 2956 2958 2959 2960 2961 2963 2972 2973 1281 1282 1877 1878 1454 1284 1455 2675 1473 3864 3865 3842 3843 3844 3846 2962 }
  ownedprovinces         = { 1283 1448 1450 1451 1452 1453 2675 2964 2966 2967 2968 2969 2970 2971 }
  controlledprovinces    = { 1283 1448 1450 1451 1452 1453 2675 2964 2966 2967 2968 2969 2970 2971 }

  techapps               = { 3440 1010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 5
    free_market       = 5
    professional_army = 1
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 10000 } # 达赖十三世·土登嘉措 
  headofgovernment       = { type = 9 id = 10001 } # 九世班禅·曲吉尼玛 
  foreignminister        = { type = 9 id = 10002 } # 达赖十三世·土登嘉措 
  armamentminister       = { type = 9 id = 10003 } # 夏格巴·旺秋德典 
  ministerofsecurity     = { type = 9 id = 10004 } # 夏格巴·旺秋德典 
  ministerofintelligence = { type = 9 id = 10005 } # 丹巴绛央 
  chiefofstaff           = { type = 9 id = 10006 } # 丹巴绛央 
  chiefofarmy            = { type = 9 id = 10007 } # 丹巴绛央 
  chiefofnavy            = { type = 9 id = 16119 } # 陸軍管轄
  chiefofair             = { type = 9 id = 16078 } # 少數民族 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_Buddhism"
  nationalculture        = "policy_political_theocracy"

  landunit = {
    id       = { type = 10030 id = 19 }
    name     = "藏軍第一軍"
    location = 1453
    division = {
      id             = { type = 1030 id = 20 }
      name           = "第一師"
      type           = bergsjaeger
      model          = 0
      strength       = 60
    }
  }
}
