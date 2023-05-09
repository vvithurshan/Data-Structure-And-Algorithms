void pair_interaction_energy(System *system, Force *force) {

  // Check if pair interaction calculation is enabled
  if (!system->pair_interaction_calculation_enabled) {
    return;
  }

  // Loop over all atoms in the system
  for (int i = 0; i < system->num_atoms; i++) {

    // Loop over all other atoms in the system
    for (int j = i + 1; j < system->num_atoms; j++) {

      // Calculate the pairwise interaction energy between the two atoms
      double r = distance(system->atoms[i], system->atoms[j]);
      double E = 4 * system->epsilon * [(system->sigma / r) ^ 12 - (system->sigma / r) ^ 6];

      // Add the pairwise interaction energy to the total energy of the system
      force->total_energy += E;
    }
  }
}

