#include <string>

namespace log_line {

    // Tarea 1: Extrae solo el mensaje (lo que va después de ": ")
    std::string message(std::string line) {
        size_t colon_pos = line.find(": ");
        return line.substr(colon_pos + 2);
    }

    // Tarea 2: Extrae solo el nivel (lo que está entre '[' y ']')
    std::string log_level(std::string line) {
        size_t start = line.find('[');
        size_t end = line.find(']');
        // substr(inicio, longitud) -> longitud es (end - start - 1)
        return line.substr(start + 1, end - start - 1);
    }

    // Tarea 3: Reorganiza el formato a "mensaje (nivel)"
    std::string reformat(std::string line) {
        return message(line) + " (" + log_level(line) + ")";
    }

} // namespace log_line