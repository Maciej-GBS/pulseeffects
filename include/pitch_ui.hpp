#ifndef PITCH_UI_HPP
#define PITCH_UI_HPP

#include "plugin_ui_base.hpp"

class PitchUi : public Gtk::Grid, public PluginUiBase {
 public:
  PitchUi(BaseObjectType* cobject,
          const Glib::RefPtr<Gtk::Builder>& builder,
          const std::string& schema,
          const std::string& schema_path);
  PitchUi(const PitchUi&) = delete;
  auto operator=(const PitchUi&) -> PitchUi& = delete;
  PitchUi(const PitchUi&&) = delete;
  auto operator=(const PitchUi &&) -> PitchUi& = delete;
  ~PitchUi() override;

  void reset() override;

 private:
  Gtk::ToggleButton *faster = nullptr, *formant_preserving = nullptr;

  Glib::RefPtr<Gtk::Adjustment> cents, crispness, semitones, octaves, input_gain, output_gain;
};

#endif
