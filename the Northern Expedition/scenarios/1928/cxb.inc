##############################
# Country definition for CXB #
##############################

country = {
  tag                = CXB
  regular_id         = U05
  ai                 = "cxb_1925.ai"
  intrinsic_gov_type = paternal_autocrat
  capital            = 1442 # 格爾木
  dissent            = 25
  extra_tc           = 2
  manpower           = 15
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50
  SpyInfo                = { country = "CXB" NumberOfSpies = 10 }

  nationalprovinces      = { 1275 1276 1277 1442 1441 1440 1443 1274 1444 2796 2797 2798 2799 2800 2801 2805 2806 2807 2955 2956 2958 2959 2960 2961 2963 2808 2809 2804 2802 2803 1273 2810 2811 }
  ownedprovinces         = { 1275 1276 1277 1442 1441 1440 1443 1274 1444 2796 2797 2798 2799 2800 2801 2805 2806 2807 2955 2956 2958 2959 2960 2961 2963 }
  controlledprovinces    = { 1275 1276 1277 1442 1441 1440 1443 1274 1444 2796 2797 2798 2799 2800 2801 2805 2806 2807 2955 2956 2958 2959 2960 2961 2963 }

  techapps               = { 3300 3310 3340 1190 1010 4310 }

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
  chiefofnavy            = { type = 9 id = 16119 } # 陸軍管轄
  chiefofair             = { type = 9 id = 16078 } # 少數民族 
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_Islam"
  nationalculture        = "policy_political_conservatism"

  landunit = {
    id       = { type = 10040 id = 5 }
    name     = "寧海軍"
    location = 1443
    leader   = 22008
    division = {
      id             = { type = 10040 id = 6 }
      name           = "寧海軍"
      type           = cavalry
      model          = 4
      strength       = 30
    }
  }
}
