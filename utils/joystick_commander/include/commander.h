/**
 * @file commander.h
 * @brief Commander Interface.
 *
 */


#ifndef COMMANDER_H
#define COMMANDER_H


/**
 * @brief Initialize the commander for use
 *
 * @param [in] channel to use (preferred to deprecate)
 *
 * @return ERROR code:
 * \li \ref NOERR (1) if success.
 * \li \ref ERROR (0) if failure.
 *
 */
int commander_init( int channel );

/**
 * @brief Close the commander.  Releases and closes all modules
 *        under the commander also.
 *
 * @param [void]
 *
 * @return void
 *
 */
void commander_close( );

/**
 * @brief Commander low-frequency update.  Checks the status of the
 *        joystick and the the OSCC modules and updates the current
 *        values, including brakes, throttle and steering.  Is expected
 *        to execute every 50ms.
 *
 * @param [void]
 *
 * @return ERROR code:
 * \li \ref NOERR (1) if success.
 * \li \ref ERROR (0) if failure.
 *
 */
int commander_low_frequency_update( );

/**
 * @brief Commander high-frequency update. Checks the state of the
 *        driver override to disable the OSCC modules. Is expected to
 *        execute every 1ms
 *
 * @param [void]
 *
 * @return ERROR code:
 * \li \ref NOERR (1) if success.
 * \li \ref ERROR (0) if failure.
 *
 */
int commander_high_frequency_update( );


#endif /* COMMANDER_H */
