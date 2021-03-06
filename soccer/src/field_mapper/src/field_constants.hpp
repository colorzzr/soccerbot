/*
 * field_constants.hpp
 *
 * Constant Units
 *
 * Length: millimeters
 * Weight: grams
 *
 */

#ifndef FIELD_MAPPER_SRC_FIELD_CONSTANTS_HPP_
#define FIELD_MAPPER_SRC_FIELD_CONSTANTS_HPP_

/* FIELD CONSTANTS */

#define FIELD_LENGTH 			9000	// A
#define FIELD_WIDTH 			6000	// B
#define GOAL_DEPTH 				5000	// C
#define GOAL_WIDTH 				1800	// D
#define GOAL_AREA_LENGTH 		600		// E
#define GOAL_AREA_WIDTH 		3450	// F
#define PENALTY_MARK_DISTANCE 	1800	// G
#define CENTER_CIRCLE_DISTANCE 	1500	// H
#define BORDER_STRIP_WIDTH 		700		// I

/**                     ^
 *   I                  | I
 * <--->________________v_____________________
 *      |                  |                 |
 *      |____              |              ___|
 * 	    |    |             |             |   |
 *  ____|    |             |             |   |___
 *  |   |    |           __|__           |   |   |
 *  |   |    |          /  |  \          |   |   |
 *  |   |    |    *     |  |  |     *    |   |   |
 *  |   |    |          \__|__/          |   |   |
 *  |___|    |             |             |   |___|
 *      |    |             |             |   |
 *      |____|             |             |___|
 *      |                  |                 |
 *      |__________________|_________________|
 *
 *   Reference Diagram https://www.robocuphumanoid.org/wp-content/uploads/HumanoidLeagueRules2015-06-29-with-changes.pdf
 */

/* GRASS CONSTANTS */

#define YARN_LENGTH				30		// Length of the grass
#define BORDER_WIDTH			50		// The lines will be white in color
#define SEG_BORDER_LENGTH		100		// The segments for the penalty mark and the kickoff mark


/* GOAL CONSTANTS */

#define NET_COLOR				BLACK	// The color of the net
#define MESH_SIZE				40		// The holes on the net
#define CROSSBAR_HEIGHT			1100
#define NET_HEIGHT				1000
#define GOAL_POST_DIAMETER		100
#define GOAL_POST_RADIUS		16
#define GOAL_POST_COLOR			WHITE


/* BALL SIZE */

#define BALL_DIAMETER			130
#define BALL_RADIUS				20.6
#define BALL_WEIGHT				130


#endif /* FIELD_MAPPER_SRC_FIELD_CONSTANTS_HPP_ */
