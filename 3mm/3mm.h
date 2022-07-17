/**
 * 3mm.h: This file is part of the PolyBench/GPU 1.0 test suite.
 *
 *
 * Contact: Scott Grauer-Gray <sgrauerg@gmail.com>
 * Will Killian <killian@udel.edu>
 * Louis-Noel Pouchet <pouchet@cse.ohio-state.edu>
 * Web address: http://www.cse.ohio-state.edu/~pouchet/software/polybench/GPU
 */

#ifndef THREEMM_H
# define THREEMM_H

/* Default to STANDARD_DATASET. */
# if !defined(MINI_DATASET) && !defined(SMALL_DATASET) && !defined(LARGE_DATASET) && !defined(EXTRALARGE_DATASET)&& !defined(MINI_VVSMALL) && !defined(MINI_VSMALL) && !defined(MINI_SMALL)
#  define STANDARD_DATASET
# endif

/* Do not define anything if the user manually defines the size. */
# if !defined(NI) && !defined(NJ) && !defined(NK) && !defined(NL) && !defined(NM)
/* Define the possible dataset sizes. */
#  ifdef MINI_VVSMALL
# define NI 32
# define NJ 32
# define NK 32
# define NL 32
# define NM 32
#  endif

#  ifdef MINI_VSMALL
# define NI 64
# define NJ 64
# define NK 64
# define NL 64
# define NM 64
#  endif

#  ifdef MINI_SMALL
# define NI 128
# define NJ 128
# define NK 128
# define NL 128
# define NM 128
#  endif

#  ifdef MINI_DATASET
# define NI 256
# define NJ 256
# define NK 256
# define NL 256
# define NM 256
#  endif

#  ifdef SMALL_DATASET
# define NI 512
# define NJ 512
# define NK 512
# define NL 512
# define NM 512
#  endif

#  ifdef STANDARD_DATASET /* Default if unspecified. */
# define NI 1024
# define NJ 1024
# define NK 1024
# define NL 1024
# define NM 1024
#  endif

#  ifdef LARGE_DATASET
# define NI 2048
# define NJ 2048
# define NK 2048
# define NL 2048
# define NM 2048
#  endif

#  ifdef EXTRALARGE_DATASET
# define NI 4096
# define NJ 4096
# define NK 4096
# define NL 4096
# define NM 4096
#  endif
# endif /* !N */

# define _PB_NI POLYBENCH_LOOP_BOUND(NI,ni)
# define _PB_NJ POLYBENCH_LOOP_BOUND(NJ,nj)
# define _PB_NK POLYBENCH_LOOP_BOUND(NK,nk)
# define _PB_NL POLYBENCH_LOOP_BOUND(NL,nl)
# define _PB_NM POLYBENCH_LOOP_BOUND(NM,nm)

# ifndef DATA_TYPE
#  define DATA_TYPE float
#  define DATA_PRINTF_MODIFIER "%0.2lf "
# endif

/* Thread block dimensions */
#define DIM_LOCAL_WORK_GROUP_X 32
#define DIM_LOCAL_WORK_GROUP_Y 8


#endif /* !THREEMM*/