##############################
# Country definition for U18 #
##############################

country = {
  tag                = U18
  capital            = 1273 # 銀川
  dissent            = 25
  extra_tc           = 2
  manpower           = 10
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50

  diplomacy = {
    relation = { tag = U03 value = 200 access = yes }
  }
  SpyInfo                = { country = "U18" NumberOfSpies = 10 }
  SpyInfo                = { country = "U03" NumberOfSpies = 5 }

  nationalprovinces      = { 1273 1274 1275 1276 1277 1440 1441 1442 1443 1444 2796 2797 2798 2799 2800 2801 2802 2803 2804 2805 2806 2807 2808 2809 2810 2955 2956 2958 2959 2960 2961 2963 2811 }
  ownedprovinces         = { 1273 2802 2803 2804 2808 2809 2810 2811 }
  controlledprovinces    = { 1273 2802 2803 2804 2808 2809 2810 2811 }

  techapps               = { 3300 3310 3340 4400 1010 1020 1030 1040 1050 1060 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 10
    interventionism   = 2
  }
  chiefofnavy            = { type = 9 id = 16078 } # 少數民族 
  chiefofair             = { type = 9 id = 16069 } # 本土勢力
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_Islam"
  nationalculture        = "policy_political_conservatism"

  landunit = {
    id       = { type = 10050 id = 1 }
    name     = "國民軍新編第七師"
    location = 1273
    division = {
      id             = { type = 10050 id = 2 }
      name           = "新編第七師"
      type           = infantry
      model          = 6
    }
  }
}
