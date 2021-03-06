#pragma once

//stdlib
#include <stdexcept>
#include <string>

namespace mumlib {
    class MumlibException : public std::runtime_error {
    public:
        MumlibException(std::string message) : std::runtime_error(message) { }
    };

    class AudioDecoderException : public MumlibException {
    public:
        explicit AudioDecoderException(std::string message) : MumlibException(message) { }
    };

    class AudioEncoderException : public MumlibException {
    public:
        explicit AudioEncoderException(std::string message) : MumlibException(message) { }
    };

    class AudioPacketException : public MumlibException {
    public:
        explicit AudioPacketException(std::string message) : MumlibException(message) { }
    };

    class TransportException : public MumlibException {
    public:
        TransportException(std::string message) : MumlibException(std::move(message)) { }
    };

    class VarIntException : public MumlibException {
    public:
        VarIntException(std::string message) : MumlibException(message) { }
    };
}
