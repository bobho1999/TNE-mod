##############################
# Country definition for FRA #
##############################
province = { id = 1320 naval_base = 4 } # 湛江

#####################
# Country main data #
#####################

country = {
  tag                = FRA
  capital            = 1328 # 河內
  manpower           = 150
  peacetime_ic_mod       = 0.2
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 100
  transports     = 150
  escorts        = 80
  free = {
    ic             = 60
#    manpower       = 200
    energy         = 50
    metal          = 50
    rare_materials = 10
    oil            = 10
    supplies       = 10
    money          = 5
  }

  diplomacy = {
    relation = { tag = ENG value = 100 }
  }
  SpyInfo                = { country = "FRA" NumberOfSpies = 10 }

  nationalprovinces      = { 1306 1326 1328 1329 1332 1333 1334 1335 1336 1337 1338 1339 1340 3591 3593 3702 3703 3704 3706 3705 3714 3713 3708 3715 3709 3716 3721 3710 3711 3712 3720 3719 3718 3717 3707 }
  ownedprovinces         = { 1320 1306 1326 1328 1329 1332 1333 1334 1335 1336 1337 1338 1339 1340 3591 3593 3702 3703 3704 3706 3705 3714 3713 3708 3715 3709 3716 3721 3710 3711 3712 3720 3719 3718 3717 3707 }
  controlledprovinces    = { 1320 1306 1326 1328 1329 1332 1333 1334 1335 1336 1337 1338 1339 1340 3591 3593 3702 3703 3704 3706 3705 3714 3713 3708 3715 3709 3716 3721 3710 3711 3712 3720 3719 3718 3717 3707 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 5500 5200 5210 5220 5230 5240 5510 5520 5530 5540 5400 5410 5420 5430 5440 5030 5040 5060 5050 5010 5100 5110 5300 5310 5140 5150 1010 1020 1030 1040 1050 1060 1070 1080 1090 1220 1210 1200 1190 1290 1280 1270 1260 1400 1310 1320 1330 8410 8420 8400 8700 8730 8300 8200 8100 8000 8110 8210 8310 8320 8070 8010 8020 8030 8060 8050 8080 8040 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 6
    freedom           = 10
    free_market       = 8
    professional_army = 3
    defense_lobby     = 7
    interventionism   = 1
  }
#  chiefofnavy            = { type = 9 id = 16087 } # 列强 
  chiefofair             = { type = 9 id = 16087 } # 法國 
  nationalidentity       = "policy_economy_monopoly"
  socialpolicy           = "policy_social_Catholicism"
  nationalculture        = "policy_political_conservatism"

  landunit = {
    id       = { type = 13500 id = 91 }
    name     = "印支守备集团军 "
    location = 1337
    division = {
      id             = { type = 13500 id = 92 }
      name           = "北圻师 "
      type           = infantry
      model          = 8
      strength       = 65
      experience     = 15
    }
    division = {
      id             = { type = 13500 id = 93 }
      name           = "印度支那·柬埔寨师 "
      type           = infantry
      model          = 8
      extra          = police
      brigade_model  = 1
      strength       = 60
      experience     = 1
    }
  }
}
