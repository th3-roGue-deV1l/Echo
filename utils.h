#pragma once

#include <iostream>
#include <thread>
#include <vector>

//static void Pa_CheckError(PaError err);

//void Wh_Transcribe();

// command-line parameters
struct whisper_params
{
	int32_t n_threads = std::min(4, (int32_t)std::thread::hardware_concurrency());
	int32_t n_processors = 1;
	int32_t offset_t_ms = 0;
	int32_t offset_n = 0;
	int32_t duration_ms = 0;
	int32_t max_context = -1;
	int32_t max_len = 0;
	int32_t best_of = 2;
	int32_t beam_size = -1;

	float word_thold = 0.01f;
	float entropy_thold = 2.40f;
	float logprob_thold = -1.00f;

	bool speed_up = false;
	bool translate = false;
	bool detect_language = false;
	bool diarize = false;
	bool split_on_word = false;
	bool no_fallback = false;
	bool output_txt = false;
	bool output_vtt = false;
	bool output_srt = false;
	bool output_wts = false;
	bool output_csv = false;
	bool output_jsn = false;
	bool output_lrc = false;
	bool print_special = false;
	bool print_colors = false;
	bool print_progress = false;
	bool no_timestamps = false;

	std::string language = "en";
	std::string prompt;
	std::string font_path = "/System/Library/Fonts/Supplemental/Courier New Bold.ttf";
	std::string model = "./Models/ggml-model-whisper-base.en.bin";

	std::vector<std::string> fname_inp = {};
	std::vector<std::string> fname_out = {};
};