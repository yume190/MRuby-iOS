sensor_value = Tgm.get_sensor("07edv0a1")
if sensor_value > 8
  Tgm.set_sensor("05edr001", 1)
else
  Tgm.set_sensor("05edr001", 0)
end
