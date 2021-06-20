##############################
# Country definition for SIA #
##############################
province = {
  id = 1343 # 曼谷
  naval_base = { size = 4 current_size = 4 }
}
province = {
  id = 1348 # 宋卡◆洛坤
  naval_base = { size = 1 current_size = 1 }
}

#####################
# Country main data #
#####################

country = {
  tag                = SIA
  capital            = 1343 # 曼谷
  dissent            = 20
  manpower           = 200
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
  SpyInfo                = { country = "SIA" NumberOfSpies = 10 }

  nationalprovinces      = { 1303 1330 1331 1339 1341 1342 1343 1344 1345 1347 1348 3722 3723 3724 3725 3726 3727 3728 3729 3730 3731 3732 3733 3734 3735 3719 1340 3717 1336 3718 }
  ownedprovinces         = { 1345 1343 1342 1331 1330 1341 1344 1303 1347 1348 3729 3730 3728 3727 3726 3724 3725 3723 3731 3722 3732 3733 3734 3735 }
  controlledprovinces    = { 1345 1343 1342 1331 1330 1341 1344 1303 1347 1348 3729 3730 3728 3727 3726 3724 3725 3723 3731 3722 3732 3733 3734 3735 }

  techapps               = { 3430 1010 1020 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 1
    free_market       = 6
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 4
  }
  chiefofair             = { type = 9 id = 16078 } # 少數民族 
  nationalidentity       = "policy_economy_colonial"
  socialpolicy           = "policy_social_Buddhism"
  nationalculture        = "policy_political_regality"

  landunit = {
    id       = { type = 23600 id = 1 }
    name     = "暹罗陆军第2军 "
    location = 1345
    division = {
      id             = { type = 23600 id = 2 }
      name           = "第1步兵师 "
      type           = infantry
      model          = 5
      strength       = 90
    }
    division = {
      id             = { type = 23600 id = 3 }
      name           = "第2步兵师 "
      type           = infantry
      model          = 5
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 23600 id = 4 }
    name     = "暹罗皇家近卫军 "
    location = 1343
    division = {
      id             = { type = 23600 id = 5 }
      name           = "第1皇家近卫师"
      type           = motorized
      extra          = artillery
      strength       = 90
    }
  }

  navalunit = {
    id       = { type = 23600 id = 6 }
    name     = "暹罗皇家海军第1舰队 "
    location = 1345
    base     = 1345
    division = {
      id             = { type = 23600 id = 7 }
      name           = "阿育提亚号 "
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23600 id = 8 }
      name           = "多苏布尔号 "
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23600 id = 10 }
      name           = "雷佛罗提号 "
      type           = destroyer
      model          = 0
    }
  }
}
