##############################
# Country definition for SIK #
##############################

country = {
  tag                = SIK
  ai                 = "sik_1925.ai"
  capital            = 1433 # ÎÚÂ³Ä¾Æë
  dissent            = 30
  manpower           = 20
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 1000
  oil            = 1000
  supplies       = 1000
  money          = 100
  SpyInfo                = { country = "SIK" NumberOfSpies = 10 }

  nationalprovinces      = { 1435 1445 1447 1421 1432 1433 1446 1430 1431 2978 2979 2980 2981 2982 2983 2984 2985 2986 2987 2988 2989 2998 2999 2997 3464 3481 3480 3478 3471 3472 3470 2965 2962 2957 }
  ownedprovinces         = { 1435 1445 1447 1421 1432 1433 1446 1430 1431 2978 2979 2980 2981 2982 2983 2984 2985 2986 2987 2988 2989 2998 2999 2997 3464 3481 3480 3478 3471 3472 3470 2965 2962 2957 }
  controlledprovinces    = { 1421 1432 1433 1446 1430 1431 1445 1447 1435 2978 2979 2980 2981 2982 2983 2984 2985 2986 2987 2988 2989 2998 2999 2997 3464 3481 3480 3478 3471 3472 3470 2965 2962 2957 }

  techapps               = { 4010 2150 2290 1010 1190 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 5
  }
  chiefofnavy            = { type = 9 id = 16119 } # ê‘ÜŠ¹ÜÝ  
  chiefofair             = { type = 9 id = 16008 } # ±±Ñó¾üéy
  nationalidentity       = "policy_economy_natural"
  socialpolicy           = "policy_social_Islam"
  nationalculture        = "policy_political_conservatism"

  landunit = {
    id       = { type = 10020 id = 1 }
    name     = "ÐÂ½®Ê¡ÜŠ"
    location = 1433
    leader   = 94001
    division = {
      id             = { type = 10020 id = 2 }
      name           = "ê‘ÜŠµÚÒ»ŽŸ"
      type           = infantry
      model          = 6
    }
    division = {
      id             = { type = 10020 id = 3 }
      name           = "ê‘ÜŠµÚ¶þÂÃ"
      type           = infantry
      model          = 6
      strength       = 80
    }
    division = {
      id             = { type = 10020 id = 4 }
      name           = "òT±øÂÃ"
      type           = cavalry
      model          = 3
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 10020 id = 5 }
    name     = "¹þÃÜñvÜŠ"
    location = 1435
    division = {
      id             = { type = 10020 id = 6 }
      name           = "¹þÃÜÂÃ"
      type           = militia
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 10020 id = 7 }
    name     = "¿¦Ê²ñvÜŠ"
    location = 1430
    division = {
      id             = { type = 10020 id = 8 }
      name           = "¿¦Ê²ÂÃ"
      type           = militia
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 10020 id = 9 }
    name     = "ÒÁÀçñvÜŠ"
    location = 1432
    division = {
      id             = { type = 10020 id = 10 }
      name           = "ÒÁÀçÂÃ"
      type           = militia
      model          = 2
      strength       = 50
    }
  }
}
