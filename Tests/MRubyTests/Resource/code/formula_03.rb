sensor_value_01 = Tgm.get_sensor("07edv0a2")
if sensor_value_01 > 5
  Tgm.set_sensor("05edr002", 1)
else
  Tgm.set_sensor("05edr002", 0)
end

