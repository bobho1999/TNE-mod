##############################
# Country definition for U10 #
##############################

#province = {
#  id = 1257 # 衡陽
#  ic = { size = 1 current_size = 1 }
#}

#####################
# Country main data #
#####################

country = {
  tag                = U10
  regular_id         = CGX
  capital            = 1255 # 長沙
  dissent            = 20
  manpower           = 30
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

  nationalprovinces      = { 2670 1260 2671 2672 2678 2676 1261 2674 2679 1259 2677 1257 1256 1255 2685 2683 2682 2684 2680 2681 }
  ownedprovinces         = { 2670 1260 2671 2672 2678 2676 1261 2674 2679 1259 2677 1257 1256 1255 2685 2683 2682 2684 2680 2681 }
  controlledprovinces    = { 2670 1260 2671 2672 2678 2676 1261 2674 2679 1259 2677 1257 1256 1255 2685 2683 2682 2684 2680 2681 }

  techapps               = { 3300 3310 3350 1120 1110 1100 1130 1140 1010 4400 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 3
    defense_lobby     = 10
    interventionism   = 4
  }
  chiefofnavy            = { type = 9 id = 16119 } # 陸軍管轄 
  chiefofair             = { type = 9 id = 16018 } # 南方军閥
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 30039 id = 101000 }
    name     = "湘军第一军 "
    location = 1257
    leader   = 82001
    division = {
      id             = { type = 30039 id = 101001 }
      name           = "省防第4师 "
      type           = infantry
      model          = 6
      extra          = police
      brigade_model  = 1
      experience     = 50
      locked         = yes
    }
    division = {
      id             = { type = 30039 id = 101002 }
      name           = "省防第7师 "
      type           = infantry
      model          = 6
      extra          = police
      brigade_model  = 1
      experience     = 50
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 30039 id = 101010 }
    name     = "湘粤边防军 "
    location = 1257
    leader   = 82005
    division = {
      id             = { type = 30039 id = 101011 }
      name           = "湘军第9旅 "
      type           = infantry
      model          = 6
      experience     = 25
    }
    division = {
      id             = { type = 30039 id = 101012 }
      name           = "地方保安團 "
      type           = militia
      model          = 2
      experience     = 25
    }
  }
  landunit = {
    id       = { type = 30039 id = 101020 }
    name     = "湖南司令部 "
    location = 1255
    leader   = 82000
    division = {
      id             = { type = 30039 id = 101021 }
      name           = "省防第2师 "
      type           = infantry
      model          = 5
      experience     = 50
    }
    division = {
      id             = { type = 30039 id = 101022 }
      name           = "湖南補充旅 "
      type           = militia
      model          = 3
      experience     = 25
    }
  }
  landunit = {
    id       = { type = 30039 id = 101030 }
    name     = "湘民自卫军 "
    location = 1256
    leader   = 82008
    division = {
      id             = { type = 30039 id = 101031 }
      name           = "省防第2师 "
      type           = infantry
      model          = 13
      experience     = 50
    }
    division = {
      id             = { type = 30039 id = 101032 }
      name           = "地方保安團 "
      type           = militia
      model          = 3
      experience     = 25
    }
  }

  landdivision = { dormant = yes id = { type = 22400 id = 101041 } name = "第八军第1师 "  type = infantry model = 15 strength = 70 experience = 25 extra = artillery brigade_model = 0  } 
  landdivision = { dormant = yes id = { type = 22400 id = 101042 } name = "第八军第2师 "  type = infantry model = 15 strength = 70 experience = 25 extra = artillery brigade_model = 0  } 
  landdivision = { dormant = yes id = { type = 22400 id = 101043 } name = "第八军第3师 "  type = infantry model = 15 strength = 70 experience = 25 extra = artillery brigade_model = 0  } 
  landdivision = { dormant = yes id = { type = 22400 id = 101044 } name = "第八军第4师 "  type = infantry model = 15 strength = 70 experience = 25 extra = police brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 22400 id = 101045 } name = "第八军教导师 "  type = infantry model = 15 strength = 70 experience = 25 extra = police brigade_model = 2 } 
  landdivision = { dormant = yes id = { type = 30039 id = 1 } name = "第35軍第一師"  type = infantry model = 14 } 
  landdivision = { dormant = yes id = { type = 30039 id = 2 } name = "第35軍第二師"  type = infantry model = 14 } 
  landdivision = { dormant = yes id = { type = 30039 id = 3 } name = "第35軍第三師"  type = infantry model = 14 } 
  landdivision = { dormant = yes id = { type = 30039 id = 4 } name = "第36軍第一師"  type = infantry model = 14 } 
  landdivision = { dormant = yes id = { type = 30039 id = 5 } name = "第36軍第二師"  type = infantry model = 14 } 
  landdivision = { dormant = yes id = { type = 30039 id = 6 } name = "第36軍第三師"  type = infantry model = 14 } 
}
