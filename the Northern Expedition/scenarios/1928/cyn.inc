##############################
# Country definition for CYN #
##############################

country = {
  tag                = CYN
  regular_id         = UCH
  ai                 = "cyn_1925.ai"
  intrinsic_gov_type = paternal_autocrat
  capital            = 1307 # 昆明
  dissent            = 15
  extra_tc           = 4
  manpower           = 20
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 100
  supplies       = 100
  money          = 50
  SpyInfo                = { country = "CYN" NumberOfSpies = 10 }

  nationalprovinces      = { 1293 1294 1305 1307 1308 1327 1362 2746 2747 2977 2749 2750 2751 2752 2753 2754 2755 2756 2757 2758 2759 2760 2761 2762 2763 2764 2765 2775 1363 2744 1262 2742 2741 2743 2740 1364 2738 1365 2737 2745 2974 1898 2774 2776 2975 }
  ownedprovinces         = { 1293 1294 1305 1307 1308 1327 1362 2746 2747 2749 2750 2751 2752 2753 2754 2755 2756 2757 2758 2759 2760 2761 2762 2763 2764 2765 2974 1898 }
  controlledprovinces    = { 1293 1294 1305 1307 1308 1327 1362 2746 2747 2749 2750 2751 2752 2753 2754 2755 2756 2757 2758 2759 2760 2761 2762 2763 2764 2765 2974 1898 }

  techapps               = { 1010 1100 1110 1120 1130 1140 3510 3300 3310 3340 4400 4310 5030 5050 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 3
  }
  chiefofnavy            = { type = 9 id = 16119 } # 陸軍管轄
  chiefofair             = { type = 9 id = 16018 } # 南方軍閥 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 15052 id = 1 }
    name     = "昆明城防軍 "
    location = 1307
    leader   = 92001
    division = {
      id             = { type = 15053 id = 6 }
      name           = "第一混成旅 "
      type           = militia
      model          = 3
      strength       = 80
      max_strength   = 80
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 15053 id = 7 }
      name           = "雲南補充旅 "
      type           = militia
      model          = 3
      strength       = 80
      max_strength   = 80
      experience     = 25
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 15052 id = 2 }
    name     = "雲南第一军 "
    location = 1327
    leader   = 92000
    division = {
      id             = { type = 15053 id = 1 }
      name           = "雲南第一师 "
      type           = infantry
      model          = 6
      strength       = 100
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 15053 id = 2 }
      name           = "雲南第二师 "
      type           = infantry
      model          = 6
      strength       = 100
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 15053 id = 3 }
      name           = "雲南第三师 "
      type           = infantry
      model          = 13
      strength       = 100
      experience     = 25
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 15052 id = 3 }
    name     = "雲南第二军 "
    location = 2747
    leader   = 92013
    division = {
      id             = { type = 15053 id = 4 }
      name           = "雲南第四师 "
      type           = infantry
      model          = 13
      strength       = 100
      experience     = 25
      locked         = yes
    }
    division = {
      id             = { type = 15053 id = 5 }
      name           = "雲南第五师 "
      type           = infantry
      model          = 13
      strength       = 100
      experience     = 25
      locked         = yes
    }
  }

  landdivision = { dormant = yes id = { type = 15053 id = 8 } name = "百色戍戊旅 "  type = infantry model = 13 experience = 10 locked = yes } 
  landdivision = { dormant = yes id = { type = 15053 id = 9 } name = "南寧戍戊旅 "  type = infantry model = 13 experience = 10 locked = yes } 
  landdivision = { dormant = yes id = { type = 15053 id = 10 } name = "陸軍第97師"  type = infantry model = 15 strength = 75 experience = 10 } 
  landdivision = { dormant = yes id = { type = 15053 id = 11 } name = "陸軍第98師"  type = infantry model = 14 strength = 75 experience = 10 } 
  landdivision = { dormant = yes id = { type = 15053 id = 12 } name = "陸軍第99師"  type = infantry model = 14 strength = 75 experience = 10 } 
  landdivision = { dormant = yes id = { type = 15053 id = 13 } name = "陸軍第101師"  type = infantry model = 15 strength = 75 experience = 10 } 
  landdivision = { dormant = yes id = { type = 15053 id = 14 } name = "陸軍第102師"  type = infantry model = 14 strength = 75 experience = 10 } 
  landdivision = { dormant = yes id = { type = 15053 id = 15 } name = "陸軍獨立第8師"  type = infantry model = 14 strength = 75 experience = 10 } 
}
