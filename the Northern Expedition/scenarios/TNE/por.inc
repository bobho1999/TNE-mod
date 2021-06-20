##############################
# Country definition for POR #
##############################

country = {
  tag                = POR
  capital            = 0 # （运输中）
  manpower           = 0
  # Resource Reserves
  energy         = 0
  metal          = 0
  rare_materials = 0
  oil            = 0
  supplies       = 0
  money          = 0

  nationalprovinces      = { 1316 }
  ownedprovinces         = { 1316 }
  controlledprovinces    = { 1316 }

  techapps               = { 1090 1080 1070 1060 1050 1040 1030 1020 1010 1210 1200 1190 1220 }

  landunit = {
    id       = { type = 19600 id = 1 }
    name     = "澳門守衛司令部"
    location = 1316
    division = {
      id             = { type = 19600 id = 2 }
      name           = "澳門守備隊"
      type           = garrison
      model          = 2
      extra          = police
      brigade_model  = 0
      locked         = yes
    }
  }
}
