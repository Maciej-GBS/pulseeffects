#ifndef DEESSER_PRESET_HPP
#define DEESSER_PRESET_HPP

#include "plugin_preset_base.hpp"

class DeesserPreset : public PluginPresetBase {
 public:
  DeesserPreset();

  void write(PresetType preset_type, boost::property_tree::ptree& root) override;
  void read(PresetType preset_type, const boost::property_tree::ptree& root) override;

 private:
  Glib::RefPtr<Gio::Settings> input_settings, output_settings;

  void save(boost::property_tree::ptree& root,
            const std::string& section,
            const Glib::RefPtr<Gio::Settings>& settings) override;
  void load(const boost::property_tree::ptree& root,
            const std::string& section,
            const Glib::RefPtr<Gio::Settings>& settings) override;
};

#endif
