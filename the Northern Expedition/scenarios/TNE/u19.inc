##############################
# Country definition for U19 #
##############################

country = {
  tag                = U19
  capital            = 1258 # 桂林
  dissent            = 20
  manpower           = 15
  peacetime_ic_mod       = 0.8
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 100

  nationalprovinces      = { 1309 1311 1319 2719 2720 2721 2722 2723 2724 2725 2726 2734 2735 2736 2727 2728 2729 1258 1310 2730 2731 2732 2733 }
  ownedprovinces         = { 2727 2728 2729 1258 1310 2730 2731 2732 2733 }
  controlledprovinces    = { 2727 2728 2729 1258 1310 2730 2731 2732 2733 }

  techapps               = { 3300 3310 3340 4310 1010 1100 1110 1120 1130 1140 }

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
  chiefofair             = { type = 9 id = 16018 } # 南方軍閥 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 22002 id = 119000 }
    name     = "建国军第一军 "
    location = 1258
    leader   = 18001
    division = {
      id             = { type = 22002 id = 119001 }
      name           = "建国军新编第一师 "
      type           = infantry
      model          = 5
      max_strength   = 80
    }
  }
  landunit = {
    id       = { type = 22002 id = 119010 }
    name     = "建国军第一游击纵队 "
    location = 1310
    leader   = 18002
    division = {
      id             = { type = 22002 id = 119011 }
      name           = "游击第一旅 "
      type           = militia
      model          = 2
    }
    division = {
      id             = { type = 22002 id = 119012 }
      name           = "游击第二旅 "
      type           = militia
      model          = 2
    }
  }
  landunit = {
    id       = { type = 22002 id = 119040 }
    name     = "建国军警卫部队 "
    location = 1258
    leader   = 18005
    division = {
      id             = { type = 22002 id = 119041 }
      name           = "建国军警卫团 "
      type           = infantry
      model          = 5
      extra          = police
      brigade_model  = 1
      max_strength   = 40
    }
  }
}
