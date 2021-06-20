##############################
# Country definition for U11 #
##############################

country = {
  tag                = U11
  puppet             = U02
  ai                 = "u11_1925.ai"
  capital            = 1216 # 濟南
  dissent            = 20
  manpower           = 40
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

  nationalprovinces      = { 1213 1170 2852 2851 2864 1216 2853 2850 2863 2855 2856 2854 2857 2858 2859 2862 1215 2860 1214 2861 1894 1203 2875 2876 2673 2874 }
  ownedprovinces         = { 1213 1170 2852 2851 2864 1216 2853 2850 2863 2855 2856 2854 2857 2858 2859 2862 1215 2860 1214 2861 1894 }
  controlledprovinces    = { 1213 1170 2852 2851 2864 1216 2853 2850 2863 2855 2856 2854 2857 2858 2859 2862 1215 2860 1214 2861 1894 }

  techapps               = { 3300 3310 3350 4400 4310 1010 1020 1030 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 3
    professional_army = 3
    defense_lobby     = 10
    interventionism   = 4
  }
  chiefofnavy            = { type = 9 id = 16119 } # 陸軍管轄
  chiefofair             = { type = 9 id = 16008 } # 北洋軍閥 
  nationalidentity       = "policy_economy_natural-Capitalism"
  socialpolicy           = "policy_social_confucianism"
  nationalculture        = "policy_political_dignitary"

  landunit = {
    id       = { type = 10100 id = 1 }
    name     = "東北陸軍第二師"
    location = 1216
    leader   = 72002
    division = {
      id             = { type = 10100 id = 2 }
      name           = "第3旅"
      type           = infantry
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 10100 id = 3 }
      name           = "第28旅"
      type           = infantry
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 10100 id = 4 }
      name           = "第29旅"
      type           = infantry
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 10100 id = 5 }
      name           = "第32旅"
      type           = infantry
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 10100 id = 6 }
      name           = "補充旅"
      type           = infantry
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10100 id = 7 }
    name     = "山東陸軍"
    location = 1216
    leader   = 72001
    division = {
      id             = { type = 10100 id = 8 }
      name           = "山東第55旅"
      type           = militia
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 10100 id = 9 }
      name           = "山東第2混成旅"
      type           = militia
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 10100 id = 10 }
      name           = "山東第4混成旅"
      type           = militia
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 10100 id = 11 }
      name           = "山東第6混成旅"
      type           = militia
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 10100 id = 12 }
    name     = "山東第五師"
    location = 1216
    division = {
      id             = { type = 10100 id = 15 }
      name           = "第九旅"
      type           = militia
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 10100 id = 16 }
      name           = "第十旅"
      type           = militia
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 10100 id = 13 }
    name     = "中央第20混成旅"
    location = 1216
    division = {
      id             = { type = 10100 id = 17 }
      name           = "中央第20混成旅"
      type           = infantry
      model          = 5
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10100 id = 14 }
    name     = "中央第47混成旅"
    location = 1216
    division = {
      id             = { type = 10100 id = 18 }
      name           = "中央第47混成旅"
      type           = infantry
      model          = 5
      strength       = 60
    }
  }
}
